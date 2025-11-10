#include <iostream>
#include <string>

using namespace std;

class student {
protected:
    string name;
};

class test : virtual protected student {
protected:
    int grade;
};

class sports : virtual protected student {
protected:
    int per; 
};

class result : virtual protected test, virtual protected sports {
    int res;
public:
    void accept() {
        cout << "Enter name: ";
        cin >> name; 
        cout << "Enter grade: ";
        cin >> grade;
        cout << "Enter percentage: ";
        cin >> per;
    }
    void disp() {
        res = (per + grade) / 2;
        cout << "Name: " << name << endl;
        cout << "Result: " << res << endl;
    }
};

int main() {
    result r;
    r.accept();
    r.disp();
    return 0;
}