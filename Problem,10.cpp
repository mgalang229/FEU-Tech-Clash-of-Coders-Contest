#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n = 6;
    vector<int> d1(n), d2(n), d3(n);
    for (int i = 0; i < n; i++) {
        cin >> d1[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> d2[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> d3[i];
    }
    int p;
    cin >> p;
    double cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                if (d1[i] + d2[j] + d3[k] == p) {
                    cnt++;
                }
            }
        }
    }
    double ans = (cnt / 216) * 100;
    cout << fixed << setprecision(2) << ans << '%' << '\n';
    return 0;
}
