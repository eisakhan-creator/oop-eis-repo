#include <iostream>
#include <fstream> 

using namespace std;

int main() {
    ofstream make_file("first.txt");
    make_file << "This is the original file." << endl;
    make_file << "It has multiple lines." << endl;
    make_file.close();

    ifstream first_file("first.txt");
    ofstream second_file("second.txt");

    if (!first_file) {
        cout << "Error opening first.txt!" << endl;
        return 1;
    }

    char ch;
    while (first_file.get(ch)) {
        second_file.put(ch);
    }

    first_file.close();
    second_file.close();

    cout << "File copied successfully to second.txt" << endl;
    return 0;
}