#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int sz = 100010;
int cars[sz], cache[sz];
int main() {
	cin.sync_with_stdio(false);
	cout.sync_with_stdio(false);
	int n, elm;
	cin >> n;
	fill(cache, cache + n, -1);
	int res = 1;
	for (int i = 0; i < n; ++i) {
		cin >> cars[i];
		elm = cars[i] - 1;
		if (cache[elm] == -1)
			cache[cars[i]] = 1;
		else
			cache[cars[i]] = 1 + cache[elm];
		res = max(res, cache[cars[i]]);
	}
	cout << n - res;
	return 0;
}