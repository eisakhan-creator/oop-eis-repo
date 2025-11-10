#include <iostream>

using namespace std;

class student {
public:
    class marks {
        int m; 
    public:
        void accept() {
            cout << "Enter the marks for the class: ";
            cin >> m;
        }
        void display() {
            cout << "The marks are: " << m << endl;
        }
    };
};

int main() {
    student::marks m1; 
    
    m1.accept();
    m1.display();
    return 0;
}