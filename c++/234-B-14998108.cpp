#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<ii> v;
vector<int> s;
int main() {
    int n, k, elm;
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        cin >> elm;
        v.push_back(ii(elm, i + 1));
    }
    sort(v.rbegin(), v.rend());
    cout << v[k - 1].first << endl;
    for (int i = 0; i < k; ++i) {
        s.push_back(v[i].second);
    }
    sort(s.begin(), s.end());
    for (int i = 0; i < k; ++i) {
        cout<<s[i]<<" ";
    }
    return 0;
}