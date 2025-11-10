#include <iostream>
#include <string>

using namespace std;

class vehicle {
protected:
    string brand, model;
};

class car : protected vehicle {
protected:
    string type; 
};

class electric_car : protected car {
    int battery;
public:
    void accept() {
        cout << "Enter brand and model: ";
        cin >> brand >> model;
        cout << "Enter type (sport, sedan, etc): ";
        cin >> type;
        cout << "Enter battery capacity (kWh): ";
        cin >> battery;
    }
    void disp() {
        cout << "\n--- Car Details ---" << endl;
        cout << "Brand: " << brand << ", Model: " << model << endl;
        cout << "Type: " << type << ", Battery: " << battery << "kWh" << endl;
    }
};

int main() {
    electric_car e1;
    e1.accept();
    e1.disp();
    return 0;
}