#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

int main() {
    string s;
    int n;
    cin >> n;
    cin >> s;
    bool a = false;
    for (i64 i = 0; i < s.size(); i++) {
        if (!a && s[i] == '|') {
            a = true;
        } else if (a && s[i] == '*') {
            cout << "in" << endl;
            return 0;
        } else if (a && s[i] == '|') {
            a = false;
        }
    }
    cout << "out" << endl;
    return 0;
}
