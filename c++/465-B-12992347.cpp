#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, elm;
	vector<int> v;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> elm;
		v.push_back(elm);
	}
	int ans = 0;
	for (int i = 0; i < n; ++i) {
		if (v[i] == 1) {
			++ans;
			++i;
			while (i < n && v[i] == 1) {
				++ans;
				++i;
			}
			++ans;
		}
	}
	if (ans == 0)
		cout << 0 << endl;
	else
		cout << ans - 1;
	return 0;
}