#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> v;
int main() {
	int n;
	cin >> n;
	ll elm;
	for (int i = 0; i < n; ++i) {
		cin >> elm;
		v.push_back(elm);
	}
	sort(v.rbegin(), v.rend());
	ll res = 0;
	set<ll> s;
	for (int i = 0; i < n; ++i) {
		if (s.find(v[i]) == s.end()) {
			s.insert(v[i]);
			res += v[i];
		} else {
			for (int j = 1; j <= 27; ++j) {
				if (v[i] - j > 0)
					if (s.find(v[i] - j) == s.end()) {
						s.insert(v[i] - j);
						res += (v[i] - j);
						break;
					}
			}
		}
	}
	cout << res;
	return 0;
}