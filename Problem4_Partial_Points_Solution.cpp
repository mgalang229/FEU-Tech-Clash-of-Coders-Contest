#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    string s;
    cin.ignore();
    getline(cin, s);
    bool consonant = false;
    bool checker = false;
    string temp = "";
    for (int i = 0; i < (int) s.size(); i++) {
        if (i == 0) {
            if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u') {
                consonant = true;
            }
        } else if (s[i - 1] == ' ') {
            if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u') {
                consonant = true;
                checker = false;
            }
        }
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
            checker = true;
            cout << s[i];
        } else if (checker) {
            cout << s[i];
        } else {
            temp += s[i];
        }
        if (s[i + 1] == ' ') {
            if (consonant) {
                cout << temp + "ay";
            } else {
                cout << "yay";
            }
            consonant = false;
            temp = "";
        }
    }
    if (consonant && checker) {
        cout << temp + "ay";
    } else if (consonant && !checker) {
        cout << "ay";
    } else if (checker) {
        cout << "yay";
    }
    cout << '\n';
    return 0;
}
