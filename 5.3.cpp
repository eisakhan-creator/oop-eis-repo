#include <iostream>
#include <string>

using namespace std;

class College {
    int roll;
    string name;
    string course;
public:
    College(int r, string n, string c = "Computer") {
        roll = r;
        name = n;
        course = c;
    }
    void display() {
        cout << "Roll: " << roll << ", Name: " << name << ", Course: " << course << endl;
    }
};

int main() {
    College c1(1, "Eisa", "AIDS");
    
    College c2(2, "Shreyash");

    c1.display();
    c2.display();
    return 0;
}