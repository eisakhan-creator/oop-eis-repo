#include <iostream>

using namespace std;

class addition {
public:
    int A;
    
    void operator++() {
        A = A + 1; 
    }
};

int main() {
    addition B;
    B.A = 25;
    cout << "Before: " << B.A << endl;
    
    ++B; 
    
    cout << "After: " << B.A << endl;
    return 0;
}