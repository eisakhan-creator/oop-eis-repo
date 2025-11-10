#include <iostream>
#include <fstream>
#include <ctype.h> 

using namespace std;

int main() {
    ofstream make_file("test_data.txt");
    make_file << "This file has 10 lines and 20 spaces." << endl;
    make_file << "The year is 2025." << endl;
    make_file.close();

    ifstream new_file("test_data.txt");
    if (!new_file) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    int dig = 0;
    int spaces = 0;
    char ch;

    while (new_file.get(ch)) {
        if (isdigit(ch)) {
            dig++;
        }
        if (isspace(ch)) {
            spaces++;
        }
    }

    new_file.close();

    cout << "No. of digits: " << dig << endl;
    cout << "No. of spaces: " << spaces << endl;
    return 0;
}