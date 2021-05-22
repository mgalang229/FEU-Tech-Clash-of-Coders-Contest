#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int dn, cn;
    cin >> dn >> cn;
    vector<int> denom(dn), counter(dn), change(cn);
    for (int i = 0; i < dn; i++) {
        cin >> denom[i];
    }
    for (int i = 0; i < dn; i++) {
        cin >> counter[i];
    }
    for (int i = 0; i < cn; i++) {
        cin >> change[i];
    }
    for (int i = 0; i < cn; i++) {
        int cnt = 0;
        int temp = change[i];
        vector<int> num(dn, 0);
        for (int j = 0; j < dn;) {
            if (change[i] >= denom[j] && counter[j] > 0) {
                change[i] -= denom[j];
                counter[j]--;
                cnt++;
                num[j]++;
            } else {
                j++;
            }
        }
        cout << temp << ": ";
        for (int j = 0; j < dn; j++) {
            if (num[j] > 0) {
                cout << denom[j] << "x" << num[j] << " ";
            }
        }
        cout << '\n';
    }
    for (int i = 0; i < dn; i++) {
        cout << denom[i] << "x" << counter[i] << " ";
    }
    cout << '\n';
    return 0;
}
