#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<int> v;
vector<ii> work;
int main() {
    int n, elm, k;
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        cin >> elm;
        work.push_back(ii(elm, i + 1));
    }
    sort(work.begin(), work.end());
    int idx = 0;
    int sum = work[0].first;
    int cnt = 0;
    while (sum <= k) {
        ++idx;
        ++cnt;
        if (idx >= n)
            break;
        sum += work[idx].first;
    }
    cout << cnt << endl;
    for (int i = 0; i <idx; ++i) {
        cout << work[i].second << " ";
    }
    return 0;
}