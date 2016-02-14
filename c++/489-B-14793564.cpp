#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<int> v1, v2;

int main() {
	int n, m, elm;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> elm;
		v1.push_back(elm);
	}
	cin >> m;
	for (int i = 0; i < m; ++i) {
		cin >> elm;
		v2.push_back(elm);
	}
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());
	int ptr1, ptr2, ans;
	ptr1 = ptr2 = ans = 0;
	while (ptr1 < n && ptr2 < m) {
		if (abs(v1[ptr1] - v2[ptr2]) == 1 || abs(v1[ptr1] - v2[ptr2]) == 0) {
			++ans;
			++ptr1;
			++ptr2;
		} else if (v1[ptr1] < v2[ptr2])
			++ptr1;
		else
			++ptr2;
	}
	cout << ans;
	return 0;
}