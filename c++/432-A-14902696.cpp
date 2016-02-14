#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<int> v;

int main() {
    int n, elm, k;
    cin >> n >> k;
    int cnt = 0;
    k = 5 - k;
    for (int i = 0; i < n; ++i) {
        cin >> elm;
        if (elm <= k)
            ++cnt;
    }
    cout << cnt / 3;
    return 0;
}