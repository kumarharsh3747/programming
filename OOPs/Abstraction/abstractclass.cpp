#include <iostream>
using namespace std;

class User {
public:
    virtual void userType() = 0; // Pure virtual function
};

class Donor : public User {
public:
    void userType() override {
        cout << "I am a blood donor." << endl;
    }
};

class Recipient : public User {
public:
    void userType() override {
        cout << "I am a blood recipient." << endl;
    }
};

int main() {
    User* user1 = new Donor();
    User* user2 = new Recipient();

    user1->userType(); // Output: I am a blood donor.
    user2->userType(); // Output: I am a blood recipient.

    delete user1;
    delete user2;

    return 0;
}
