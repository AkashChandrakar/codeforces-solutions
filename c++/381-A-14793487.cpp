#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<int> v;
list<int> l;
int main() {
	int n, elm, p1, p2;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> elm;
		l.push_back(elm);
	}
	bool turn = 1;
	int mx;
	p1=p2=0;
	while (!l.empty()) {
		if (l.front() > l.back()) {
			mx = l.front();
			l.pop_front();
		} else {
			mx = l.back();
			l.pop_back();
		}
		if (turn)
			p1 += mx;
		else
			p2 += mx;
		turn ^= 1;
	}
	cout << p1 << " " << p2;
	return 0;
}