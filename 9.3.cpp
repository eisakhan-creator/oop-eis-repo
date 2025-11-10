#include <iostream>
#include <fstream>
#include <string> 

using namespace std;

int main() {
    ofstream make_file("word_count.txt");
    make_file << "This is a test file to count words." << endl;
    make_file.close();

    ifstream new_file("word_count.txt");
    if (!new_file) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    string word;
    int word_count = 0;

    while (new_file >> word) {
        word_count++;
    }

    new_file.close();

    cout << "No. of words: " << word_count << endl;
    return 0;
}