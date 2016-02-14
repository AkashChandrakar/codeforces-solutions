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
    int minsum = INT_MAX, sum, res = 1;
    sum = 0;
    for (int j = 0; j < k; ++j) {
        sum = 0;
        for (int i = j; i < n; i += k) {
            sum += v[i];
        }
        if (minsum > sum) {
            minsum = sum;
            res = j + 1;
        }
    }
    cout << res;
    return 0;
}