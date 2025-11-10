#include <iostream>

using namespace std;

class eisa {
public:
    int A;
    
    void operator-() {
        A = -A;
    }
};

int main() {
    eisa B;
    B.A = 25;
    cout << "Before: " << B.A << endl;
    
    -B; 
    
    cout << "After: " << B.A << endl;
    return 0;
}