#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int> counter(n + 1, 0);
    for (int i = 0; i < n; i++) {
        counter[a[i]]++;
    }
    vector<int> ans = a;
    for (int i = 0; i < n; i++) {
        if (counter[a[i]] < 2) {
            ans.emplace_back(a[i]);
        }
    }
    for (int i = 0; i < (int) ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << '\n';
    return 0;
}
