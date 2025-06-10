
#include <iostream>
#include <algorithm>
#include <vector>
#include <random>
#include<iostream>

using namespace std;

class Message {
private:
    string text;
    int id;
    static int counter;
public:
    Message(const string& txt) : text(txt), id(counter++) {}

    const string& get_text() const {
        return text;
    }

    bool operator<(const Message& other) const {
        return id < other.id;
    }
};

int Message::counter = 0;

class MessageFactory {
public:
    Message create_message(const string& text) {
        return Message(text);
    }
};

class Recipient {
public:
    Recipient() {}
    void receive(const Message& msg) {
        messages_.push_back(msg);
    }
    void print_messages() {
        fix_order();
        for (auto& msg : messages_) {
            cout << msg.get_text() << endl;
        }
        messages_.clear();
    }
private:
    void fix_order() {
        sort(messages_.begin(), messages_.end());
    }
    vector<Message> messages_;
};

class Network {
public:
    static void send_messages(vector<Message> messages, Recipient& recipient) {
        
        random_shuffle(messages.begin(), messages.end());
        for (auto msg : messages) {
            recipient.receive(msg);
        }
    }
};

int main() {
    MessageFactory message_factory;
    Recipient recipient;
    vector<Message> messages;
    string text;
    while (getline(cin, text)) 
    {
        messages.push_back(message_factory.create_message(text));
    }
    Network::send_messages(messages, recipient);
    recipient.print_messages();
}
