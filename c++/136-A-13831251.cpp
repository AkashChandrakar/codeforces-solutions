#include <bits/stdc++.h>
using namespace std;
int a[110];
int main() {
    vector<int> v;
    int n,e;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>e;
        v.push_back(e);
    }
    for (int i = 0; i < n; ++i) {
        a[v[i]]=i+1;
    }
    for (int i = 1; i <= n; ++i) {
        cout<<a[i]<<" ";
    }
    return 0;
}