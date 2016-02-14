#include <bits/stdc++.h>
using namespace std;
const int sz = 1000010;
typedef long long ll;
ll arr[2 * sz];

int main() {
	cin.sync_with_stdio(false);
	cout.sync_with_stdio(false);
	int n, cnt = 0, dupn;
	cin >> n;
	dupn = n;
	arr[0] = INT_MAX;
	for (int i = 1; i <= n; ++i) {
		cin >> arr[i];
	}
	while (dupn) {
		++cnt;
		dupn /= 4;
	}
	ll pow4 = 1;
	ll res = 0;
	sort(arr, arr + n+1, greater<int>());
	for (int i = 1; i <= n; ++i) {
		res += (cnt * arr[i]);
		if (i == pow4) {
			pow4 *= 4;
			--cnt;
		}
	}
	cout << res;
	return 0;
}