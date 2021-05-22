#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, rules;
    cin >> n >> rules;
    vector<int> num(n);
    vector<string> s(n);
    for (int i = 0; i < rules; i++) {
        cin >> num[i] >> s[i];
    }
    for (int i = 1; i <= n; i++) {
        bool checker = false;
        for (int j = 0; j < rules; j++) {
            if (i % num[j] == 0) {
                checker = true;
                cout << s[j];
            }
        }
        if (!checker) {
            cout << i;
        }
        cout << '\n';
    }
    return 0;
}
