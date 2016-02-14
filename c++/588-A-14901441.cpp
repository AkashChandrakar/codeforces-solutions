#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<int> v;

int main() {
	int n, ai, pi;
	int mn = 101;
	cin >> n;
	int res = 0;
	for (int i = 0; i < n; ++i) {
		cin >> ai >> pi;
		mn = min(pi, mn);
		res = res + (ai * mn);
	}
	cout << res << endl;
	return 0;
}