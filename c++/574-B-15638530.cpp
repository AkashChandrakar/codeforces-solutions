#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<ll> v;
set<ii> S;
const int sz = 4010;
vector<int> adj[sz];
int degree[sz];

int main() {
	int n, m, x, y, v, u;
	cin >> n >> m;
	for (int i = 0; i < m; ++i) {
		cin >> x >> y;
		if (x > y)
			swap(x, y);
		degree[x] += 1;
		degree[y] += 1;
		S.insert(ii(x, y));
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	int res = INT_MAX;
	for (int i = 1; i <= n; ++i) {
		for (int j = 0; j < adj[i].size(); ++j) {
			v = adj[i][j];
			for (int k = 0; k < adj[v].size(); ++k) {
				u = adj[v][k];
				if (S.find(ii(i, u)) != S.end()) {
					res = min(res, degree[i] + degree[v] + degree[u] - 6);
				}
			}
		}
	}
	if (res == INT_MAX)
		cout << "-1";
	else
		cout << res;
	return 0;
}