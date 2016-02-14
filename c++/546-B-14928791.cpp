#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<int> v;

int main() {
	int n, elm;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> elm;
		v.push_back(elm);
	}
	sort(v.begin(), v.end());
	set<int> S;
	int res = 0;
	int mnnum = -1;
	for (int i = 0; i < n; ++i) {
		if (v[i] < mnnum || (S.find(v[i]) != S.end())) {
			res += (mnnum - v[i]);
			S.insert(mnnum);
			++mnnum;
		} else {
			S.insert(v[i]);
			mnnum = v[i] + 1;
		}
	}
	cout << res;
	return 0;
}