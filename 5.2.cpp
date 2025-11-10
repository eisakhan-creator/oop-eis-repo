#include <iostream>
#include <string>

using namespace std;

class student {
    string name;
    int per; 

public:
    student() {
        name = "eisa";
        per = 99;
        cout << "Default constructor called." << endl;
    }

    student(string n, int p) {
        name = n;
        per = p;
        cout << "Parameterized constructor called." << endl;
    }
    
    student(student &s1) {
        name = s1.name;
        per = s1.per;
        cout << "Copy constructor called." << endl;
    }

    void display() {
        cout << "The name is: " << name << endl;
        cout << "The per is: " << per << endl;
    }
};

int main() {
    cout << "--- s1 (Default) ---" << endl;
    student s1;
    s1.display();

    cout << "\n--- s2 (Parameterized) ---" << endl;
    student s2("shreyash", 98);
    s2.display();

    cout << "\n--- s3 (Copy of s1) ---" << endl;
    student s3(s1);
    s3.display();
    
    return 0;
}