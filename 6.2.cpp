#include <iostream>

using namespace std;

class academics {
protected:
    int marks;
};

class sports {
protected:
    int score;
};

class result : protected academics, protected sports {
public:
    void accept() {
        cout << "Enter the marks and sports score: ";
        cin >> marks >> score;
    }
    void display() {
        cout << "Result:" << endl;
        cout << "Marks: " << marks << endl;
        cout << "Score: " << score << endl;
    }
};

int main() {
    result r1;
    r1.accept();
    r1.display();
    return 0;
}