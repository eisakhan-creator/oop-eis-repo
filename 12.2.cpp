#include <iostream>
#include <queue> 

using namespace std;

int main() {
    queue<int> age;
    
    age.push(21);
    age.push(22);
    age.push(23);
    age.push(20);
    
    cout << "Front element is: " << age.front() << endl;
    cout << "Back element is: " << age.back() << endl;
    
    age.pop(); 
    
    cout << "Front element after pop: " << age.front() << endl;
    
    cout << "Elements in queue:" << endl;
    while (!age.empty()) {
        cout << age.front() << " ";
        age.pop();
    }
    cout << endl;
    
    return 0;
}