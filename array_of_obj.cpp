#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string name;
    int roll;
    int mark;
};

int main() {
    int n;
    cin >> n;
    cin.ignore(); // To consume the newline after entering 'n'

    Student a[n];
    for (int i = 0; i < n; i++) {
        getline(cin, a[i].name); 
        cin >> a[i].roll >> a[i].mark;
        cin.ignore(); // consume the leftover newline before the next getline
    }

    for (int i = 0; i < n; i++) {
        cout << a[i].name << " " << a[i].roll << " " << a[i].mark << endl;
    }

    return 0;
}
