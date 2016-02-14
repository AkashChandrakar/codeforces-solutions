#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<int> v;

int main() {
    int n, elm, k;
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        cin >> elm;
        v.push_back(elm);
    }
    sort(v.begin(), v.end());
    if (k >= n) {
        cout << 2 * (v[v.size() - 1] - 1);
        return 0;
    }
    int ans = 0;
    int j = v.size() - 1;
    int times = n / k;
    while (times) {
        ans = ans + 2 * (v[j] - 1);
        j -= k;
        --times;
    }
    times = n % k;
    if (times) {
        ans = ans + 2 * (v[j] - 1);
    }
    cout << ans;

    return 0;
}