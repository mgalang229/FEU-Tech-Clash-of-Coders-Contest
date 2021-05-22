#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<string> s(n);
    int size = INT_MAX;
    for (int i = 0; i < n; i++) {
        cin >> s[i];
        size = min(size, (int) s[i].size());
    }
    vector<string> pattern = {"ABCDEF", "BC", "ABDEG", "ABCDG", "BCFG", "ACDFG", "ACDEFG",
                              "ABCF", "ABCDEFG", "ABCDFG"};
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        int number = -1;
        for (int j = 0; j < (int) pattern.size(); j++) {
            if (s[i] == pattern[j]) {
                number = j;
            }
        }
        ans.emplace_back(number);
    }
    vector<bool> visited(n, false);
    for (int i = 0; i < n; i++) {
        if ((int) s[i].size() == size && !visited[ans[i]]) {
            visited[ans[i]] = true;
            cout << ans[i] << " ";
        }
    }
    cout << '\n';
    return 0;
}
