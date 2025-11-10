#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream make_file("target_file.txt");
    make_file << "Hello world hello sky hello moon" << endl;
    make_file << "world is beautiful" << endl;
    make_file.close();

    ifstream new_file("target_file.txt");
    if (!new_file) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    string target = "hello"; 
    string word;
    int count = 0;

    while (new_file >> word) {
        if (word == target) {
            count++;
        }
    }

    new_file.close();

    cout << "The word '" << target << "' appeared " << count << " times." << endl;
    return 0;
}