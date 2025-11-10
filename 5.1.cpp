#include <iostream>

using namespace std;

class sum {
    int n, s;

public:
    sum() {
        n = 5;
        s = 0;
        cout << "Default constructor called. n = " << n << endl;
    }

    sum(int num) {
        n = num;
        s = 0;
        for (int i = 1; i <= n; i++) {
            s += i;
        }
        cout << "Parameterized constructor called. Sum(1 to " << n << ") = " << s << endl;
    }
    
    sum(sum &obj) {
        n = obj.n;
        s = obj.s;
        cout << "Copy constructor called. Copied n=" << n << " and s=" << s << endl;
    }

    void calc() {
        s = 0;
        for (int i = 1; i <= n; i++) {
            s += i;
        }
    }
    
    void disp() {
        cout << "Number: " << n << ", Sum: " << s << endl;
    }
};


int main() {
    cout << "s1 (Default):" << endl;
    sum s1; 
    s1.calc();
    s1.disp();

    cout << "\ns2 (Parameterized):" << endl;
    sum s2(10); 
    s2.disp();

    cout << "\ns3 (Copy):" << endl;
    sum s3(s1); 
    s3.disp();

    return 0;
}