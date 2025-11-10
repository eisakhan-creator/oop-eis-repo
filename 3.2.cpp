#include <iostream>
#include <string>

using namespace std;

class student {
    string name;
    int roll;

public:
    void accept() {
        cout << "Enter name and roll no: ";
        cin >> this->name >> this->roll;
    }
    void display() {
        cout << "Name: " << this->name << endl;
        cout << "Roll: " << this->roll << endl;
    }
};

int main() {
    student s1;
    s1.accept();
    s1.display();
    return 0;
}