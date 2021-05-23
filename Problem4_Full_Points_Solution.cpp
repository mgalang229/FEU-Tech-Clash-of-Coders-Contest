#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	string temp;
	cin.ignore();
	getline(cin, temp);
	vector<string> s;
	string collect = "";
	for (int i = 0; i < (int) temp.size(); i++) {
		if (temp[i] == ' ') {
			s.emplace_back(collect);
			collect = "";
		} else {
			collect += temp[i];
		}
	}
	s.emplace_back(collect);
	auto Consonant = [&](char ch) {
		if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
			return true;
		}
		return false;
	};
	for (int i = 0; i < (int) s.size(); i++) {
		if (Consonant(s[i][0])) {
			string start = "";
			string end = "";
			bool vowel_activate = false;
			for (int j = 0; j < (int) s[i].size(); j++) {
				if (Consonant(s[i][j]) && !vowel_activate) {
					end += s[i][j];
				} else if (!Consonant(s[i][j])) {
					start += s[i][j];
					vowel_activate = true;
				} else {
					start += s[i][j];
				}
			}
			s[i] = start + end + "ay";
		} else {
			s[i] = s[i] + "yay";
		}
	}
	for (int i = 0; i < (int) s.size(); i++) {
		cout << s[i] << " ";
	}
	cout << '\n';
	return 0;
}
