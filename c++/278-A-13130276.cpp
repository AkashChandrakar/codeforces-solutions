#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<int> v;

int main() {
    int n, elm, x, y;
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> elm;
        sum += elm;
        v.push_back(elm);
    }
    cin >> x >> y;
    if (x == y) {
        cout << "0";
        return 0;
    }
    if (x > y) {
        int temp = x;
        x = y;
        y = temp;
    }
    int res = 0;
    for (int i = x - 1; i <= y - 2; ++i) {
        res += v[i];
    }
    cout << min(sum - res, res);
    return 0;
}