#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;

int main() {
	int n, m;
	cin >> n >> m;
	int ans = -1;
	for (int i = (int) ceil(n * 1.0 / 2); i <= n; ++i) {
		if (i % m == 0) {
			ans = i;
			break;
		}
	}
	cout << ans;
	return 0;
}