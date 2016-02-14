#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int sz = 100010;
typedef pair<char, int> ii;
vector<ii> v;
vector<int> org, sorted;
bool comp(ii lhs, ii rhs) {
    if (lhs.first == rhs.first)
        return lhs.second < rhs.second;
    return lhs.first > rhs.first;
}
int main() {
    string s;
    cin >> s;
    for (int i = 0; i < (int) s.length(); ++i) {
        v.push_back(ii(s[i], i));
    }
    sort(v.begin(), v.end(), comp);
    int prev = -1;
    string ans = "";
    for (int i = 0; i < (int) v.size(); ++i) {
        if (v[i].second > prev) {
            ans = ans + v[i].first;
            prev = v[i].second;
        }
    }
    cout << ans;
    return 0;
}