#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<ll> v, value;
const int sz = 100010;
int cowbells[sz];
set<ll> S;
map<ll, vector<ll> > H;
map<ll, vector<ll> >::iterator it;
int main() {
	int n;
	ll k, elm;
	cin >> n >> k;
	for (int i = 0; i < n; ++i) {
		cin >> elm;
		v.push_back(elm);
		S.insert(elm);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); ++i) {
		if (S.find(v[i]) != S.end()) {
			value.clear();
			value.push_back(v[i]);
			elm = v[i];
			S.erase(v[i]);
			while (S.find(elm * k) != S.end()) {
				value.push_back(elm * k);
				S.erase(elm * k);
				elm = elm * k;
			}
			H[v[i]] = value;
		}
	}
	int res = 0;
	for (it = H.begin(); it != H.end(); ++it) {
		elm = it->second.size();
		elm = (elm + 1) / 2;
		res += elm;
	}
	cout << res;
	return 0;
}