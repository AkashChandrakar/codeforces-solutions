#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> ii;
vector<ii> v;
vector<int> ans(3 * 100010);
bool comp(ii a, ii b) {
	if (a.first == b.first)
		return a.second < b.second;
	return a.first < b.first;
}
ll n, r, avg;
int main() {
	cin >> n;
	int a;
	for (int i = 0; i < n; ++i) {
		cin >> a;
		v.push_back(ii(a, i));
	}
	sort(v.begin(), v.end(), comp);
	int prev = -1;
	int j;
	for (int i = 0; i < n; ++i) {
		j = v[i].second;
		if (prev <= v[i].first) {
			ans[j] = v[i].first;
			prev = v[i].first + 1;
		} else {
			ans[j] = prev;
			++prev;
		}
	}
	for (int i = 0; i < n; ++i) {
		cout << ans[i] << " ";
	}
	return 0;
}