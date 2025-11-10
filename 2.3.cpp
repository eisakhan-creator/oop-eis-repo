#include <iostream>
#include <string>

using namespace std;

class staff {
public:
    string name;
    string post;

    void accept() {
        cout << "Enter name and post: ";
        cin >> name >> post;
    }
};

int main() {
    const int num_staff = 5;
    staff s[num_staff]; 

    cout << "--- Enter 5 Staff Details ---" << endl;
    for (int i = 0; i < num_staff; i++) {
        cout << "Staff " << (i + 1) << ": ";
        s[i].accept();
    }

    cout << "\n--- HOD Search Result ---" << endl;
    bool hod_found = false;
    for (int i = 0; i < num_staff; i++) {
        if (s[i].post == "hod" || s[i].post == "HOD") {
            cout << s[i].name << " is the HOD." << endl;
            hod_found = true;
        }
    }

    if (!hod_found) {
        cout << "No staff member with the post 'hod' was found." << endl;
    }

    return 0;
}