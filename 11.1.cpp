#include <iostream>
#include <vector>
#include <ctype.h> 

using namespace std;

int main() {
    vector<char> v(10); 
    unsigned int i;

    cout << "Initial size: " << v.size() << endl;

    for (i = 0; i < 10; i++) {
        v[i] = 'a' + i;
    }

    cout << "Current contents:" << endl;
    for (i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << "\n\nExpanding vector..." << endl;

    for (i = 0; i < 10; i++) {
        v.push_back('A' + i);
    }

    cout << "New size: " << v.size() << endl;
    cout << "New contents:" << endl;
    for (i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}