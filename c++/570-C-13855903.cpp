#include <bits/stdc++.h>
using namespace std;
int a[10010];
int n, m, q;
vector<int> v;
int main() {
	string s;
	cin >> n >> m;
	cin >> s;
	int cnt = 0;
	for (int i = 1; i < n; ++i) {
		cnt += ((s[i] == s[i - 1]) && (s[i] == '.'));
	}
	char ch;
	int idx;
	for (int i = 0; i < m; ++i) {
		cin >> idx >> ch;
		--idx;
		if (s[idx] != '.' && ch == '.') {
			cnt += (s[idx - 1] == ch) + (s[idx + 1] == ch);
		}
		if (s[idx] == '.' && ch != '.') {
			cnt -= (s[idx - 1] == '.') + (s[idx + 1] == '.');
		}
		cout << cnt << endl;
		s[idx] = ch;
	}
	return 0;
}