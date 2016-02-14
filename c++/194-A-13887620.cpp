#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> ii;
vector<ii> v;
const int INF = INT_MAX / 4;
vector<int> points;
int cache[51][260];
int f(int n, int k) {
    if (n == 0 && k == 0) {
        cache[0][0] = 0;
        return 0;
    }
    if (n <= 0 || k <= 0)
        return INF;
    if (cache[n][k] != -1)
        return cache[n][k];
    int u2, u3, u4, u5, m1, m2, m3;
    u2 = f(n - 1, k - 2) + 1;
    u3 = f(n - 1, k - 3);
    u4 = f(n - 1, k - 4);
    u5 = f(n - 1, k - 5);
    m1 = min(u2, u3);
    m2 = min(u4, u5);
    m3 = min(m1, m2);
    cache[n][k] = m3;
    return m3;
}
int main() {
    fill(&cache[0][0], &cache[51][0], -1);
    int n, k;
    cin >> n >> k;
    cout << f(n, k);
    return 0;
}