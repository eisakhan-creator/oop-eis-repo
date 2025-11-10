#include <iostream>
#include <string> 

using namespace std;

class Student {
private: 
    int roll_no;
    string name;

public:
    void accept() {
        cout << "Enter name and roll no: ";
        cin >> name >> roll_no;
    }

    void display() {
        cout << "Name of student: " << name << endl;
        cout << "Roll no: " << roll_no << endl;
    }
};

int main() {
    Student s1;       
    s1.accept();      
    s1.display();     
    return 0;
}