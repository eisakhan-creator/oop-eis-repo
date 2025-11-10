#include <iostream>

using namespace std;

class num {
public:
    int val;
    void accept() {
        cout << "Enter value: ";
        cin >> val;
    }
    void disp() {
        cout << "Value: " << val << endl;
    }
};

void swap(num &n1, num &n2) {
    int temp = n1.val;
    n1.val = n2.val;
    n2.val = temp;
    cout << "Inside swap function, values are swapped." << endl;
}

int main() {
    num n1, n2;
    n1.accept();
    n2.accept();

    cout << "\nBefore swap:" << endl;
    n1.disp();
    n2.disp();

    swap(n1, n2); 

    cout << "\nAfter swap (in main):" << endl;
    n1.disp(); 
    n2.disp(); 

    return 0;
}