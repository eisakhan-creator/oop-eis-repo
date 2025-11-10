#include <iostream>
#include <string>

using namespace std;

class person {
protected:
    int age;
    string name;
};

class student : protected person {
    int roll;
public:
    void accept() {
        cout << "Enter name, age, and roll no: ";
        cin >> name >> age >> roll;
    }
    void display() {
        cout << "The name is: " << name << endl;
        cout << "The age is: " << age << endl;
        cout << "The roll no is: " << roll << endl;
    }
};

int main() {
    student s1;
    s1.accept();
    s1.display();
    return 0;
}