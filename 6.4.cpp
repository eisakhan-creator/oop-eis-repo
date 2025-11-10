#include <iostream>
#include <string>

using namespace std;

class Employee {
protected:
    int empID;
    string name;
public:
    void accept_emp() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Emp ID: ";
        cin >> empID;
    }
    void show_emp() {
        cout << "Name: " << name << ", Emp ID: " << empID << endl;
    }
};

class manager : public Employee {
    string dpt;
public:
    void accept() {
        accept_emp(); 
        cout << "Enter department: ";
        cin >> dpt;
    }
    void show() {
        show_emp(); 
        cout << "Department: " << dpt << endl;
    }
};

class Developer : public Employee {
    string pl; 
public:
    void accept() {
        accept_emp(); 
        cout << "Enter programming language: ";
        cin >> pl;
    }
    void show() {
        show_emp(); 
        cout << "Language: " << pl << endl;
    }
};

int main() {
    manager m1;
    Developer d1;

    cout << "--- Enter Manager Details ---" << endl;
    m1.accept();
    cout << "\n--- Enter Developer Details ---" << endl;
    d1.accept();

    cout << "\n--- Manager Info ---" << endl;
    m1.show();
    cout << "\n--- Developer Info ---" << endl;
    d1.show();
    
    return 0;
}