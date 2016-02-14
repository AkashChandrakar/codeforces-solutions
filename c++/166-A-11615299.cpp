#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pint;
bool comp(const pint &a, const pint &b) {
	if (a.first == b.first)
		return a.second < b.second;
	return a.first > b.first;
}
vector<pint> v;
int main() {
	int n, key, a, b, j;
	cin >> n >> key;
	int cnt = 1;
	for (int i = 0; i < n; ++i) {
		cin >> a >> b;
		v.push_back(pint(a, b));
	}
	sort(v.begin(), v.end(), comp);
//	for (int i = 0; i < n; ++i) {
//		cout << v[i].first << " " << v[i].second << endl;
//	}
	a = v[key - 1].first, b = v[key - 1].second;
	j = key - 2;
	while (j >= 0 && v[j].first == a && v[j].second == b)
		--j, ++cnt;
	j = key;
	while (j < n && v[j].first == a && v[j].second == b)
		++j, ++cnt;
	cout << cnt;
	return 0;
}