#include <iostream>
#include <stack> 
#include <string>

using namespace std;

int main() {
    stack<string> cars;
    
    cars.push("BMW");
    cars.push("Audi");
    cars.push("Mercedes");
    cars.push("Ferrari");
    
    cout << "Top element: " << cars.top() << endl;
    cout << "Size of stack: " << cars.size() << endl;
    
    cars.pop(); 
    cout << "Top element after pop: " << cars.top() << endl;
    
    cout << "Emptying the stack:" << endl;
    while (!cars.empty()) {
        cout << cars.top() << endl;
        cars.pop();
    }
    
    return 0;
}