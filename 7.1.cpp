#include <iostream>

using namespace std;

class calculate {
public:
    void area(int l, int b) {
        cout << "Area of rectangle: " << l * b << endl;
    }
    
    void area(float r) {
        cout << "Area of circle: " << 3.14 * r * r << endl;
    }
};

int main() {
    calculate c;
    c.area(2, 7);    
    c.area(5.5f);  
    return 0;
}