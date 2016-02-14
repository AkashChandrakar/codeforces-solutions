#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, a, b, c, cnt = 0, sum;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> a >> b >> c;
		sum = a + b + c;
		if (sum > 1)
			++cnt;
	}
	cout << cnt;
	return 0;
}