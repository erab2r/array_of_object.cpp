#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();

    for (int i = 0; i < t; i++) {
        string s, x;
        getline(cin, s);
        getline(cin, x); 
        for (size_t i = 0; i <= s.length() - x.length(); i++) {
            if (s.substr(i, x.length()) == x) {
                s.replace(i, x.length(), "#");
            }
        }

        cout << s << endl;
    }
    return 0;
}