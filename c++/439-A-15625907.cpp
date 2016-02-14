#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int sz = 100010;
int cars[sz], cache[sz];
int main() {
	cin.sync_with_stdio(false);
	cout.sync_with_stdio(false);
	int n, elm, d;
	cin >> n >> d;
	int sum = 0;
	for (int i = 0; i < n; ++i) {
		cin >> elm;
		sum += elm;
	}
	if (d < (sum + (n - 1) * 10))
		cout << "-1";
	else {
		cout << (d - sum) / 5;
	}
	return 0;
}