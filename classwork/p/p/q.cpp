#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <unordered_map>
#include <set>
#include <map>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <fstream>
#include <memory>
#include <chrono>

using namespace std;

struct Bid {
    string buyer;
    double amount;
    bool operator<(const Bid& other) const {
        return amount < other.amount; // Lower bids have lower priority
    }
};

class User {
protected:
    string name;
public:
    User(string username) : name(username) {}
    virtual void displayRole() = 0;
    virtual ~User() = default;
};

class Buyer : public User {
public:
    Buyer(string username) : User(username) {}
    void displayRole() override { cout << name << " is a Buyer.\n"; }
};

class Seller : public User {
public:
    Seller(string username) : User(username) {}
    void displayRole() override { cout << name << " is a Seller.\n"; }
};

class Auction {
public:
    string itemName;
    double minPrice;
    priority_queue<Bid> bids;
    bool auctionActive = true;
    mutex auctionMutex;

    Auction(string name, double price) : itemName(name), minPrice(price) {}

    void placeBid(const string& buyer, double amount) {
        lock_guard<mutex> lock(auctionMutex);
        if (auctionActive && amount >= minPrice) {
            bids.push({ buyer, amount });
            cout << buyer << " placed bid $" << amount << " on " << itemName << "\n";
            logActivity("Bid placed: " + buyer + " | Amount: $" + to_string(amount));
        }
        else {
            cout << "Bid rejected: " << buyer << " ($" << amount << ") - Auction closed or below min price.\n";
        }
    }

    void closeAuction() {
        lock_guard<mutex> lock(auctionMutex);
        auctionActive = false;
        if (!bids.empty()) {
            Bid winner = bids.top();
            cout << "Auction for " << itemName << " won by " << winner.buyer << " with $" << winner.amount << "\n";
            logActivity("Auction Closed | Winner: " + winner.buyer + " | Amount: $" + to_string(winner.amount));
        }
        else {
            cout << "Auction for " << itemName << " closed with no valid bids.\n";
            logActivity("Auction Closed | No valid bids.");
        }
    }

    void logActivity(const string& message) {
        lock_guard<mutex> lock(auctionMutex);
        ofstream file("auction_log.txt", ios::app);
        if (!file) {
            cerr << "Error opening log file.\n";
            return;
        }
        file << "Auction: " << itemName << " | " << message << "\n";
        file.close();
    }
};

class AuctionEngine {
public:
    unordered_map<string, unique_ptr<Auction>> auctions;
    mutex engineMutex;

    void createAuction() {
        lock_guard<mutex> lock(engineMutex);
        string item;
        double price;
        cout << "Enter auction item name: ";
        cin >> item;
        cout << "Enter minimum price: ";
        cin >> price;
        auctions[item] = std::unique_ptr<Auction>(new Auction(item, price));
        cout << "Auction created for: " << item << " with min price $" << price << "\n";
        logEngineActivity("Auction Created: " + item + " | Min Price: $" + to_string(price));
    }

    void placeBid() {
        lock_guard<mutex> lock(engineMutex);
        string item, buyer;
        double amount;
        cout << "Enter auction item name: ";
        cin >> item;
        cout << "Enter buyer name: ";
        cin >> buyer;
        cout << "Enter bid amount: ";
        cin >> amount;

        if (auctions.find(item) != auctions.end()) {
            auctions[item]->placeBid(buyer, amount);
        }
        else {
            cout << "Invalid auction item: " << item << "\n";
        }
    }

    void closeAuction() {
        lock_guard<mutex> lock(engineMutex);
        string item;
        cout << "Enter auction item name to close: ";
        cin >> item;

        if (auctions.find(item) != auctions.end()) {
            auctions[item]->closeAuction();
        }
        else {
            cout << "Invalid auction item: " << item << "\n";
        }
    }

    void logEngineActivity(const string& message) {
        lock_guard<mutex> lock(engineMutex);
        ofstream file("auction_log.txt", ios::app);
        if (!file) {
            cerr << "Error opening log file.\n";
            return;
        }
        file << "System Activity | " << message << "\n";
        file.close();
    }
};

int main() {
    AuctionEngine engine;
    int choice;

    while (true) {
        cout << "\nAuction System Menu:\n";
        cout << "1. Create Auction\n";
        cout << "2. Place Bid\n";
        cout << "3. Close Auction\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            engine.createAuction();
            break;
        case 2:
            engine.placeBid();
            break;
        case 3:
            engine.closeAuction();
            break;
        case 4:
            cout << "Exiting Auction System.\n";
            return 0;
        default:
            cout << "Invalid choice, please try again.\n";
        }
    }

    return 0;
}