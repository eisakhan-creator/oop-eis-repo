#include <iostream>
#include <string>

using namespace std;

class Books {
public:
    int bprice;
    int bpages;
    string bname;

    void accept() {
        cout << "Enter book name, pages, and price: ";
        cin >> bname >> bpages >> bprice;
    }

    void disp() {
        cout << "The name is: " << bname << endl;
        cout << "The pages are: " << bpages << endl;
        cout << "The price is: " << bprice << endl;
    }
};

int main() {
    Books b1, b2; 

    cout << "Enter details for Book 1:" << endl;
    b1.accept();
    cout << "\nEnter details for Book 2:" << endl;
    b2.accept();

    cout << "\n--- Book 1 Details ---" << endl;
    b1.disp();
    cout << "\n--- Book 2 Details ---" << endl;
    b2.disp();
    cout << "\n--- Comparison ---" << endl;

    if (b1.bprice > b2.bprice) {
        cout << "The price of the first book is higher." << endl;
    } else if (b2.bprice > b1.bprice) {
        cout << "The price of the second book is higher." << endl;
    } else {
        cout << "Both books have the same price." << endl;
    }

    return 0;
}