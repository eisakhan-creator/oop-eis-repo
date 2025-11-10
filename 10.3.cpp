#include <iostream>

using namespace std;

template <class T>
class Calculator {
    T num1, num2;
public:
    void accept() {
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
    }
    void add() {
        cout << "Sum: " << num1 + num2 << endl;
    }
    void sub() {
        cout << "Sub: " << num1 - num2 << endl;
    }
    void mul() {
        cout << "Mul: " << num1 * num2 << endl;
    }
    void div() {
        if (num2 == 0) {
            cout << "Don't divide by zero!" << endl;
        } else {
            cout << "Div: " << num1 / num2 << endl;
        }
    }
};

int main() {
    cout << "--- Integer Calculator ---" << endl;
    Calculator<int> int_calc;
    int_calc.accept();
    int_calc.add();
    int_calc.sub();
    int_calc.mul();
    int_calc.div();

    cout << "\n--- Float Calculator ---" << endl;
    Calculator<float> flt_calc;
    flt_calc.accept();
    flt_calc.add();
    flt_calc.sub();
    flt_calc.mul();
    flt_calc.div();
    
    return 0;
}