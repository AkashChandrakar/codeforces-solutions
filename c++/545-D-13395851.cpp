#include <bits/stdc++.h>
using namespace std;
const int sz = 20010;
typedef long long ll;
vector<ll> v;
int main() {
    int n;
    ll elm;
    int cnt = 1;
    cin >> n;
    ll sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> elm;
        v.push_back(elm);
    }
    sort(v.begin(), v.end());
    sum = v[0];
    for (int i = 1; i < n; ++i) {
        if (v[i] >= sum) {
            ++cnt;
            sum += v[i];
        }
    }
    cout<<cnt;
    return 0;
}