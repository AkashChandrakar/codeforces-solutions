#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<int> v1, v2;

int main() {
	int n, m, elm, p1, p2;
	cin >> n >> m;
	for (int i = 0; i < n; ++i) {
		cin >> elm;
		v1.push_back(elm);
	}
	for (int i = 0; i < m; ++i) {
		cin >> elm;
		v2.push_back(elm);
	}
	p1 = p2 = 0;
	while (p1 < n && p2 < m) {
		if (v2[p2] >= v1[p1]) {
			++p1;
			++p2;
		} else {
			++p2;
		}
	}
	cout << n - p1 << endl;
	return 0;
}