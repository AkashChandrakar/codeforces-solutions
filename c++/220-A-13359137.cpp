#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int sz = 100010;
typedef pair<ll, ll> ii;
vector<ii> p;
vector<int> org, sorted;
int main() {
    int n, elm;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> elm;
        org.push_back(elm);
        sorted.push_back(elm);
    }
    sort(sorted.begin(), sorted.end());
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        if (sorted[i] != org[i])
            ++cnt;
        if (cnt > 2)
            break;
    }
    if(cnt<=2) cout<<"YES";
    else cout<<"NO";
    return 0;
}