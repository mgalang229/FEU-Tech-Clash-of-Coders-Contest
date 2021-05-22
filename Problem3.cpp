#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    int n;
    cin >> s >> n;
    bool checker = true;
    for (int i = 0; i < n / 2; i++) {
        if (tolower(s[i]) != tolower(s[n - 1 - i])) {
            checker = false;
            break;
        }
    }
    if (checker) {
        cout << s + " should be invited to the party!";
    } else {
        cout << s + " should not be invited to the party!";
    }
    cout << '\n';
    return 0;
}
