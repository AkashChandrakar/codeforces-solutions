#include<bits/stdc++.h>
using namespace std;

int main() {
	cin.sync_with_stdio(false);
	cout.sync_with_stdio(false);
	//ifstream cin("input.txt");
	//ofstream cout("output.txt");
	int t, n, p, i, j;
	cin >> t;
	for (int cases = 0; cases < t; ++cases) {
		cin >> n >> p;
		p += 2 * n;
		for (i = 1; i <= n && p; ++i) {
			for (j = i + 1; j <= n && p; ++j, --p) {
				cout << i << " " << j << endl;
			}
		}
	}
	return 0;
}