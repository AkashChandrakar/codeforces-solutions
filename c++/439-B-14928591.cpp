#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<ll> v;

int main() {
	int n;
	ll elm, x;
	cin >> n>>x;
	for (int i = 0; i < n; ++i) {
		cin >> elm;
		v.push_back(elm);
	}
	sort(v.begin(), v.end());
	ll res = 0;
	for (int i = 0; i < n; ++i) {
		res = res + (v[i] * x);
		if (x > 1)
			--x;
	}
	cout << res;
	return 0;
}