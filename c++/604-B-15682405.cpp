#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<ll> v;
set<ii> S;
const int sz = 100010;
int cowbells[sz];

int main() {
	int n, k, res, st;
	cin >> n >> k;
	for (int i = 1; i <= n; ++i) {
		cin >> cowbells[i];
	}
	res = 0;
	while (2 * k != n && n) {
		res = max(res, cowbells[n]);
		--n;
		--k;
	}
	st = 1;
	while (st < n) {
		res = max(res, cowbells[n] + cowbells[st]);
		++st;
		--n;
	}
	cout << res;
	return 0;
}