#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<char> v(10);
    vector<char>::iterator p; 
    int i;

    p = v.begin();
    i = 0;
    while (p != v.end()) {
        *p = 'a' + i;
        p++;
        i++;
    }

    cout << "Original content:" << endl;
    p = v.begin();
    while (p != v.end()) {
        cout << *p << " ";
        p++;
    }
    cout << endl;

    return 0;
}