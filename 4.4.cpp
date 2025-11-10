#include <iostream>

using namespace std;

class Result2; 

class Result1 {
    int r1;
public:
    void accept() {
        cout << "Enter first result: ";
        cin >> r1;
    }
    friend float avg(Result1 res1, Result2 res2);
};

class Result2 {
    int r2;
public:
    void accept() {
        cout << "Enter second result: ";
        cin >> r2;
    }
    friend float avg(Result1 res1, Result2 res2);
};

float avg(Result1 res1, Result2 res2) {
    return (float)(res1.r1 + res2.r2) / 2.0;
}

int main() {
    Result1 r1;
    Result2 r2;
    r1.accept();
    r2.accept();

    float average = avg(r1, r2);
    cout << "Average: " << average << endl;

    return 0;
}