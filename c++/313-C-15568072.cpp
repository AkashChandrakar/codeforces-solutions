#include <bits/stdc++.h>
using namespace std;
const int sz = 1000010;
typedef long long int ll;
ll arr[2 * sz];

int main() {
	int n, cnt = 0, dupn;
	scanf("%d", &n);
	;
	dupn = n;
	arr[0] = INT_MAX;
	for (int i = 1; i <= n; ++i) {
		scanf("%I64d", &arr[i]);
	}
	while (dupn) {
		++cnt;
		dupn /= 4;
	}
	ll pow4 = 1;
	ll res = 0;
	sort(arr, arr + n + 1, greater<int>());
	for (int i = 1; i <= n; ++i) {
		res += (cnt * arr[i]);
		if (i == pow4) {
			pow4 *= 4;
			--cnt;
		}
	}
	printf("%I64d", res);
	return 0;
}