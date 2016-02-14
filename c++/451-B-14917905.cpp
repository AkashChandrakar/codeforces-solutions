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
	int st, end;
	if (n == 1) {
		cout << "yes\n 1 1";
		return 0;
	}
	st = end = -1;
	for (int i = 1; i < n; ++i) {
		if (v[i - 1] > v[i]) {
			st = i - 1;
			end = i;
			break;
		}
	}
	while (end != -1 && end < n && v[end - 1] > v[end])
		++end;
	if (st != -1) {
		//reverse the segement st to end-1
		int a, b;
		a = st, b = end - 1;
		while (a < b) {
			swap(v[a], v[b]);
			++a;
			--b;
		}
	}
	//check if v is sorted
	bool sorted = 1;
	for (int i = 1; i < n; ++i) {
		if (v[i - 1] > v[i]) {
			sorted = 0;
			break;
		}
	}
	if (sorted) {
		if (st == -1) {
			end = 1;
			st = 0;
		}
		cout << "yes" << endl << st + 1 << " " << end;
	} else {
		cout << "no";
	}
	return 0;
}