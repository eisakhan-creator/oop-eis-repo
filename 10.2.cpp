#include <iostream>
#include <string>

using namespace std;

template <typename T>
T square(T val) {
    cout << "Using generic template: ";
    return val * val;
}

template <>
string square(string val) {
    cout << "Using string specialization: ";
    return val + val;
}

int main() {
    int num = 5;
    string str = "Hello";
    
    cout << "Square of int: " << square(num) << endl;
    cout << "Square of string: " << square(str) << endl;
    
    return 0;
}