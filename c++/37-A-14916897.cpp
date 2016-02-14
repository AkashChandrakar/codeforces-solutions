#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<int> v;
int cnt[1010];
int main() {
	int n, elm;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> elm;
		++cnt[elm];
	}
	int mxheight, total;
	mxheight = total = 0;
	for (int i = 0; i < 1010; ++i) {
		if (cnt[i]) {
			++total;
			mxheight = max(mxheight, cnt[i]);
		}
	}
	cout << mxheight << " " << total << endl;
	return 0;
}