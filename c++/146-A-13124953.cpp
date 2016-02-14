#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<int> v;

int main() {
	int n, elm;
	int left, right;
	cin >> n;
	string s;
	cin >> s;
	left = right = 0;
	bool ans = 1;
	for (int i = 0; i < s.length(); ++i) {
		if (s[i] != '4' && s[i] != '7') {
			ans = 0;
			break;
		}
		if (i < n / 2) {
			left = left + (s[i] - '0');
		} else {
			right = right + (s[i] - '0');
		}
	}
	if (ans && (left == right)) {
		cout << "YES";
	} else
		cout << "NO";
	return 0;
}