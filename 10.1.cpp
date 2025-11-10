#include <iostream>

using namespace std;

template <typename T>
T sumare(T arr[], int size) {
    T sum = 0;
    for (int i = 0; i < size; i++) {
        sum = sum + arr[i];
    }
    return sum;
}

int main() {
    int int_arr[5] = {1, 2, 3, 4, 5};
    float flt_arr[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    
    int int_sum = sumare(int_arr, 5);
    cout << "Integer sum: " << int_sum << endl;

    float flt_sum = sumare(flt_arr, 5);
    cout << "Float sum: " << flt_sum << endl;
    
    return 0;
}