#include <iostream>

using namespace std;

class B;

class A {
    int n1;
public:
    void accept() {
        cout << "Enter first number: ";
        cin >> n1;
    }
    void display() {
        cout << "Num1: " << n1 << endl;
    }
    friend void swap(A &obj1, B &obj2);
};

class B {
    int n2;
public:
    void accept() {
        cout << "Enter second number: ";
        cin >> n2;
    }
    void display() {
        cout << "Num2: " << n2 << endl;
    }
    friend void swap(A &obj1, B &obj2);
};

void swap(A &obj1, B &obj2) {
    int temp = obj1.n1;
    obj1.n1 = obj2.n2;
    obj2.n2 = temp;
}

int main() {
    A n1;
    B n2;
    n1.accept();
    n2.accept();

    cout << "\nBefore swap:" << endl;
    n1.display();
    n2.display();

    swap(n1, n2);

    cout << "\nAfter swap:" << endl;
    n1.display();
    n2.display();

    return 0;
}