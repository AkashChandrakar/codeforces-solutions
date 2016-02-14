#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<int> v;

int main() {
	string s;
	cin >> s;
	set<char> S(s.begin(), s.end());
	if (S.size() & 1)
		cout << "IGNORE HIM!";
	else
		cout << "CHAT WITH HER!";
	return 0;
}