#include <iostream>

using namespace std;

class time {
public:
    int hour, min, sec;

    void accept() {
        cout << "Enter time in hh mm ss format: ";
        cin >> hour >> min >> sec;
    }

    void disp() {
        cout << "The time in format is " << hour << ":" << min << ":" << sec << endl;

        int total_seconds = (hour * 3600) + (min * 60) + sec;

        cout << "Total time in seconds: " << total_seconds << endl;
    }
};

int main() {
    time t1;       
    t1.accept();   
    t1.disp();     
    return 0;
}