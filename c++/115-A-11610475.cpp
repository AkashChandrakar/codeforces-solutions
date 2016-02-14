#include <bits/stdc++.h>
using namespace std;
const int sz = 2010;
vector<int> adj[sz];
vector<int> source;
int level = 0;
void bfs(int s) {
    int n, depth = 0;
    queue<int> Q;
    Q.push(s);
    Q.push(-1);
    while (!Q.empty()) {
        n = Q.front();
        Q.pop();
        if (n == -1) {
            ++depth;
            if (!Q.empty())
                Q.push(-1);
        } else {
            for (int i = 0; i < adj[n].size(); ++i) {
                Q.push(adj[n][i]);
            }
        }
    }
    level = max(level, depth);
}

void multisource() {
    for (int i = 0; i < source.size(); ++i) {
        bfs(source[i]);
    }
}
int main() {
    int n, t;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> t;
        if (t == -1) {
            source.push_back(i);
        } else {
            adj[t].push_back(i);
        }
    }
    multisource();
    cout << level;
    return 0;
}