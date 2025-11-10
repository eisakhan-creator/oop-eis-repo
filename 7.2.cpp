#include <iostream>

using namespace std;

class sumover {
public:
    void sumint(int arr[5]) {
        int sum = 0;
        for (int i = 0; i < 5; i++) {
            sum += arr[i];
        }
        cout << "Sum of integers: " << sum << endl;
    }
    
    void sumflt(float arr[5]) {
        float sum = 0.0;
        for (int i = 0; i < 5; i++) {
            sum += arr[i];
        }
        cout << "Sum of floats: " << sum << endl;
    }
};

int main() {
    sumover s;
    int int_arr[5] = {1, 2, 3, 4, 5};
    float flt_arr[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    
    s.sumint(int_arr);
    s.sumflt(flt_arr);
    return 0;
}