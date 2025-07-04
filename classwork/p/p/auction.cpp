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
#include<memory>
using namespace std;

struct Bid {
    string buyer;
    double amount;
    bool operator<(const Bid& other) const {
        return amount < other.amount; 
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
    condition_variable auctionCV;

    Auction(string name, double price) : itemName(name), minPrice(price) {}

    void placeBid(const string& buyer, double amount) {
        lock_guard<mutex> lock(auctionMutex);
        if (auctionActive && amount >= minPrice) {
            bids.push({ buyer, amount });
            cout << buyer << " placed bid $" << amount << " on " << itemName << "\n";
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
        }
        else {
            cout << "Auction for " << itemName << " closed with no valid bids.\n";
        }
    }

    void logActivity() {
        lock_guard<mutex> lock(auctionMutex);
        ofstream file("auction_log.txt", ios::app);
        if (!file) {
            cerr << "Error opening log file.\n";
            return;
        }
        file << "Auction: " << itemName << " - Status: " << (auctionActive ? "Active" : "Closed") << "\n";
        if (!bids.empty()) {
            file << "Winner: " << bids.top().buyer << " - Amount: $" << bids.top().amount << "\n";
        }
        else {
            file << "No valid bids placed.\n";
        }
        file.close();
    }
};

class AuctionEngine {
public:
    unordered_map<string, unique_ptr<Auction>> auctions;
    mutex engineMutex;

    void createAuction(const string& item, double price) {
        lock_guard<mutex> lock(engineMutex);
        auctions[item] = std::unique_ptr<Auction>(new Auction(item, price));
        cout << "Auction created for: " << item << " with min price $" << price << "\n";
    }

    void placeBid(const string& item, const string& buyer, double amount) {
        lock_guard<mutex> lock(engineMutex);
        if (auctions.find(item) != auctions.end()) {
            auctions[item]->placeBid(buyer, amount);
        }
        else {
            cout << "Invalid auction item: " << item << "\n";
        }
    }

    void closeAuction(const string& item) {
        lock_guard<mutex> lock(engineMutex);
        if (auctions.find(item) != auctions.end()) {
            auctions[item]->closeAuction();
            auctions[item]->logActivity();
        }
    }
};

void bidSimulator(AuctionEngine& engine, const string& item) {
    this_thread::sleep_for(chrono::seconds(3));
    engine.placeBid(item, "BuyerA", 100);
    this_thread::sleep_for(chrono::seconds(2));
    engine.placeBid(item, "BuyerB", 120);
    this_thread::sleep_for(chrono::seconds(2));
    engine.placeBid(item, "BuyerC", 130);
}

int main() {
    AuctionEngine engine;

    engine.createAuction("Laptop", 90);
    thread bidderThread(bidSimulator, ref(engine), "Laptop");

    this_thread::sleep_for(chrono::seconds(10));
    engine.closeAuction("Laptop");

    bidderThread.join();
    return 0;
}