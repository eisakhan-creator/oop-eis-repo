#include <iostream>
#include <string.h> 

using namespace std;

class Stringer {
    char str[50];
public:
    void acc() {
        cout << "Enter string: ";
        cin >> str;
    }
    
    void operator+(Stringer s2) {
        strcat(this->str, s2.str);
        cout << "Concatenated string: " << this->str << endl;
    }
};

int main() {
    Stringer s1, s2;
    s1.acc();
    s2.acc();
    
    s1 + s2; 
    
    return 0;              
}