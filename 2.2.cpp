#include <iostream>

using namespace std;

class Account {
private:
    int bal; 
public:
    void accept() {
        cout << "Enter account balance: ";
        cin >> bal;
    }

    void disp() {
        cout << "Balance: " << bal << endl;
    }

    void apply_interest() {
        if (bal > 5000) {
            bal = bal + (bal * 0.18); 
            cout << "Interest applied. New balance: " << bal << endl;
        }
    }
};

int main() {
    const int num_accounts = 10;
    Account acc[num_accounts]; 

    cout << "--- Enter Balances for 10 Accounts ---" << endl;
    for (int i = 0; i < num_accounts; i++) {
        cout << "Account " << (i + 1) << ": ";
        acc[i].accept();
    }

    cout << "\n--- Applying Interest (if bal > 5000) ---" << endl;
    for (int i = 0; i < num_accounts; i++) {
        acc[i].apply_interest();
    }

    cout << "\n--- Final Account Balances ---" << endl;
    for (int i = 0; i < num_accounts; i++) {
        cout << "Account " << (i + 1) << " ";
        acc[i].disp();
    }

    return 0;
}