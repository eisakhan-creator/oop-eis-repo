#include <iostream>
#include <string>

using namespace std;

class book {
    string title;
    string author;
    int price;

public:
    void acc() { 
        cout << "Enter book title, author, and price: ";
        cin >> title >> author >> price;
    }
    void disp() { 
        cout << title << " by " << author << ", Price: " << price << endl;
    }
};

int main() {
    book b1;       
    book *ptr;     
    
    ptr = &b1;     
    
    ptr->acc();    
    ptr->disp();   
    
    return 0;
}