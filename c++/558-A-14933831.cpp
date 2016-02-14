#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<ii> neg, pos;

int main() {
	int cases, xi, ai, i;
	cin >> cases;
	for (i = 0; i < cases; ++i) {
		cin >> xi >> ai;
		if (xi < 0)
			neg.push_back(ii(xi, ai));
		else
			pos.push_back(ii(xi, ai));
	}
	sort(neg.rbegin(), neg.rend());
	sort(pos.begin(), pos.end());
	int n, p;
	n = neg.size();
	p = pos.size();
	int res = 0;
	if (n == p) {
		for (i = 0; i < n; ++i) {
			res += (neg[i].second + pos[i].second);
		}
	} else if (n > p) {
		for (i = 0; i < p; ++i) {
			res += (neg[i].second + pos[i].second);
		}
		res += neg[i].second;
	} else {
		for (i = 0; i < n; ++i) {
			res += (neg[i].second + pos[i].second);
		}
		res += pos[i].second;
	}
	cout<<res<<endl;
	return 0;
}