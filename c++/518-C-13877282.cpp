#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> ii;
map<int, int> icon;
map<int, int> index;
map<int, int>::iterator it;
int main() {
	int n, m, k, icn, b;
	cin >> n >> m >> k;
	for (int i = 1; i <= n; ++i) {
		cin >> icn;
		icon[i] = icn;
		index[icn] = i;
	}
	long long cnt = 0;
	for (int i = 0; i < m; ++i) {
		cin >> b;
		int val = index[b];
		cnt = cnt + ceil(val * 1.0 / k);
		if (val != 1) {
			--val;
			int key = icon[val];
			int temp = index[b];
			index[b] = index[key];
			index[key] = temp;
			icon[val] = b;
			icon[val + 1] = key;
		}
	}
	cout << cnt;
	return 0;
}