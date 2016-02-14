#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<int> v, temp;
int main() {
    int n, elm, prev, ans, j, k;
    int stindex = -1;
    prev = -1;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> elm;
        if (prev > elm) {
            if (stindex == -1) {
                stindex = i;
            }
        }
        v.push_back(elm);
        prev = elm;
    }
    if (stindex == -1) {
        //already sorted
        cout << "0";
        return 0;
    }
    ans = n - stindex;
    for (int i = stindex; i < n; ++i) {
        temp.push_back(v[i]);
    }
    j = stindex - 1;
    k = n - 1;
    while (j >= 0) {
        v[k] = v[j];
        --j;
        --k;
    }
    for (int i = 0; i < temp.size(); ++i)
        v[i] = temp[i];
    prev = -1;
    bool issorted = 1;
    for (int i = 0; i < n; ++i) {
        if (prev > v[i]) {
            issorted = 0;
            break;
        }
        prev = v[i];
    }
    if (issorted) {
        cout << ans;
    } else {
        cout << "-1";
    }
    return 0;
}