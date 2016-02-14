#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<int> v;

int main() {
    int n, m;
    cin >> n ;
    for (int i = 0; i < n; ++i) {
        cin>>m;
        v.push_back(m);
    }
    sort(v.begin(),v.end());
    for (int i = 0; i < n; ++i) {
        cout<<v[i]<<" ";
    }
    return 0;
}