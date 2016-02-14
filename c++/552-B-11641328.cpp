#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
pair<int, int> ii;
// timestamp : 10:14:53 pm
ll a[11];
void init() {
	ll n = 9, ten = 10, nine = 8;
	for (int i = 1; i < 10; ++i) {
		a[i] = n;
		n = n * 10 + 9;
	}
}
int numdigit(ll n) {
	int res = 0;
	while (n) {
		++res;
		n /= 10;
	}
	return res;
}

ll ans(ll n) {
	if (n <= 9)
		return n;
	ll num = numdigit(n);
	ll diff = n - a[num - 1];
	return diff * num + ans(a[num - 1]);
}
int main() {
	init();
	ll n;
	cin >> n;
	cout << ans(n);
	return 0;
}
// timestamp : 10:26:05 pm