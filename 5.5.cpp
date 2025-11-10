#include <iostream>
#include <string>

using namespace std;

class student {
    int per;
    string name;
public:
    student() {
        name = "eisa";
        per = 99;
    }
    void disp() {
        cout << "The name is: " << name << endl;
        cout << "The per is: " << per << endl;
    }
};

int main() {
    student s1;
    s1.disp();
    return 0;
}