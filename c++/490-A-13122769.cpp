#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;

int main() {
	int n, a;
	vector<int> v1, v2, v3;
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		cin >> a;
		if (a == 1) {
			v1.push_back(i);
		} else if (a == 2) {
			v2.push_back(i);
		} else {
			v3.push_back(i);
		}
	}
	int mn = min(min(v1.size(), v2.size()), v3.size());
	cout << mn << endl;
	for (int i = 0; i < mn; ++i) {
		cout << v1[i] << " " << v2[i] << " " << v3[i] << endl;
	}
	return 0;
}