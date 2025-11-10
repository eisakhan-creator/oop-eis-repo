#include <iostream>

using namespace std;

class rectangle {
    int l, b;
public:
    rectangle() {
        l = 2;
        b = 2;
    }
    
    rectangle(int x) {
        l = x;
        b = x;
    }
    
    rectangle(int x, int y) {
        l = x;
        b = y;
    }
    
    void area() {
        cout << "Area: " << l * b << endl;
    }
};

int main() {
    cout << "r1 (default): ";
    rectangle r1;
    r1.area();

    cout << "r2 (1 arg): ";
    rectangle r2(5);
    r2.area();
    
    cout << "r3 (2 args): ";
    rectangle r3(4, 5);
    r3.area();
    
    return 0;
}