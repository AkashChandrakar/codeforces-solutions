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
    sort(v.begin(), v.end());
    int p1, p2, p1limit, p2limit;
    p1 = v.size() - 1;
    p2 = (v.size() - 1) / 2;
    p1limit = p2 + 1;
    p2limit = 0;
    int res = 0;
    //cout << p1 << " " << p1limit << endl;
    //cout << p2 << " " << p2limit << endl;
    while (p1 >= p1limit && p2 >= p2limit) {
        if (v[p1] / 2 >= v[p2]) {
            --p1;
            --p2;
        } else {
            --p2;
        }
        ++res;
    }
    //cout << p1 << " " << p1limit << endl;
    //cout << p2 << " " << p2limit << endl;
    //cout << res << endl;
    res += (p1 - p1limit + 1);
    res += (p2 - p2limit + 1);
    cout << res;
    return 0;
}