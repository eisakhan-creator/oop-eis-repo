#include <iostream>
#include <string>

using namespace std;

class login {
protected:
    string name, password;
public:
    virtual void accept() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter password: ";
        cin >> password;
    }
    virtual void display() {
        cout << "Name: " << name << ", Password: " << password << endl;
    }
};

class email_login : public login {
    string email;
public:
    void accept() {
        login::accept(); 
        cout << "Enter email: ";
        cin >> email;
    }
    void display() {
        cout << "--- Email Login ---" << endl;
        login::display(); 
        cout << "Email: " << email << endl;
    }
};

class membership_login : public login {
    string memID;
public:
    void accept() {
        login::accept(); 
        cout << "Enter membership id: ";
        cin >> memID;
    }
    void display() {
        cout << "--- Membership Login ---" << endl;
        login::display(); 
        cout << "Membership ID: " << memID << endl;
    }
};

int main() {
    login *ptr; 

    email_login e;
    membership_login m;

    cout << "--- Enter Email Login Details ---" << endl;
    ptr = &e;
    ptr->accept(); 

    cout << "\n--- Enter Membership Login Details ---" << endl;
    ptr = &m;
    ptr->accept(); 

    cout << "\n--- Displaying Details ---" << endl;
    ptr = &e;
    ptr->display(); 

    ptr = &m;
    ptr->display(); 

    return 0;
}