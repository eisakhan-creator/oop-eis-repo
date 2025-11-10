#include <iostream>
#include <string>

using namespace std;

class city {
public:
    string name;
    int pop; 

    void accept() {
        cout << "Enter city name and population: ";
        cin >> name >> pop;
    }

    void disp() {
        cout << "City: " << name << ", Population: " << pop << endl;
    }
};

int main() {
    const int num_cities = 5;
    city cities[num_cities]; 

    cout << "--- Enter City Details ---" << endl;
    for (int i = 0; i < num_cities; i++) {
        cout << "City " << (i + 1) << ": ";
        cities[i].accept();
    }

    int max_pop = -1;
    int max_index = 0;

    for (int i = 0; i < num_cities; i++) {
        if (cities[i].pop > max_pop) {
            max_pop = cities[i].pop;
            max_index = i;
        }
    }

    cout << "\n--- Highest Population City ---" << endl;
    cout << "The city with the most population is: " << cities[max_index].name << endl;
    cout << "Population: " << cities[max_index].pop << endl;

    return 0;
}