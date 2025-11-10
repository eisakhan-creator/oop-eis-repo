#include <iostream>
#include <string>

using namespace std;

class person {
protected:
    string name;
    int age;
};

class student : protected person {
protected:
    int marks;
};

class sports : protected student {
protected:
    int score;
};

class academics : protected student {
protected:
    int grade;
};

class result : protected sports, protected academics {
public:
    void accept() {
        sports::marks = 80; 
        academics::marks = 90; 
        
        cout << "Enter sports score: ";
        cin >> score;
        cout << "Enter academic grade: ";
        cin >> grade;
        
        cout << "Sports marks are: " << sports::marks << endl;
        cout << "Academic marks are: " << academics::marks << endl;
    }
    void disp() {
        cout << "Score: " << score << ", Grade: " << grade << endl;
    }
};

int main() {
    result r;
    r.accept();
    r.disp();
    return 0;
}