#include <iostream>
#include <string>

using namespace std;

class student {
    string name;
    int m1, m2, m3; // Marks for 3 subjects

public:
    void accept() {
        cout << "Enter name of student: ";
        cin >> name;
        cout << "Enter marks of first subject: ";
        cin >> m1;
        cout << "Enter marks of second subject: ";
        cin >> m2;
        cout << "Enter marks of third subject: ";
        cin >> m3;
    }

    // Friend declaration: Gives 'avg' permission to access private members
    friend void avg(student s1);
};

// Friend function definition
void avg(student s1) {
    // Access s1's private members directly
    float average = (float)(s1.m1 + s1.m2 + s1.m3) / 3.0;
    cout << "Average is: " << average << endl;
}

int main() {
    student s1;
    s1.accept();
    
    avg(s1); // Call the friend function
    
    return 0;
}