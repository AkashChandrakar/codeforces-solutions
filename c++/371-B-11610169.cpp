#include <bits/stdc++.h>
using namespace std;
const int sz = 2001;
typedef pair<int, int> ii;
map<ii, int> hash;
int main() {
    int b, a, i, j, dist;
    ii n;
    cin >> a >> b;
    hash[ii(a, b)] = 0;
    queue<ii> Q;
    Q.push(ii(a, b));
    while (!Q.empty()) {
        n = Q.front();
        i = n.first;
        j = n.second;
        Q.pop();
        if (i == j)
            break;
        dist = hash[ii(i, j)];
        if (i % 2 == 0 && hash.count(ii(i / 2, j)) == 0) {
            Q.push(ii(i / 2, j));
            hash[ii(i / 2, j)] = dist + 1;
        }
        if (i % 3 == 0 && hash.count(ii(i / 3, j)) == 0) {
            Q.push(ii(i / 3, j));
            hash[ii(i / 3, j)] = dist + 1;
        }
        if (i % 5 == 0 && hash.count(ii(i / 5, j)) == 0) {
            hash[ii(i / 5, j)] = dist + 1;
            Q.push(ii(i / 5, j));
        }
        if (j % 2 == 0 && hash.count(ii(i, j / 2)) == 0) {
            hash[ii(i, j / 2)] = dist + 1;
            Q.push(ii(i, j / 2));
        }
        if (j % 3 == 0 && hash.count(ii(i, j / 3)) == 0) {
            hash[ii(i, j / 3)] = dist + 1;
            Q.push(ii(i, j / 3));
        }
        if (j % 5 == 0 && hash.count(ii(i, j / 5)) == 0) {
            hash[ii(i, j / 5)] = dist + 1;
            Q.push(ii(i, j / 5));
        }
    }
    if (i != j || hash.count(ii(i, j)) == 0) {
        cout << "-1";
    } else {
        cout << hash[ii(i, j)];
    }
    return 0;
}