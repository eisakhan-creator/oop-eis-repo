#include <iostream>

using namespace std;

class B; 

class A {
    int n1;
public:
    void accept() {
        cout << "Enter num 1: ";
        cin >> n1;
    }
    friend int sum(A obj1, B obj2);
};

class B {
    int n2;
public:
    void accept() {
        cout << "Enter num 2: ";
        cin >> n2;
    }
    friend int sum(A obj1, B obj2);
};

int sum(A obj1, B obj2) {
    return obj1.n1 + obj2.n2;
}

int main() {
    A obj1;
    B obj2;
    obj1.accept();
    obj2.accept();
    
    cout << "Sum: " << sum(obj1, obj2) << endl;
    return 0;
}