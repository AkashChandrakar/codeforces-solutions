#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<ll, ll> ii;
vector<ll> v;
int main() {
	int cases;
	ll elm, sum = 0;
	cin >> cases;
	for (int i = 0; i < cases; ++i) {
		cin >> elm;
		if (elm & 1)
			v.push_back(elm);
		else
			sum += elm;
	}
	sort(v.rbegin(), v.rend());
	if (v.size() & 1)
		v.pop_back();
	for (int i = 0; i < v.size(); ++i) {
		sum += v[i];
	}
	cout << sum;
	return 0;
}