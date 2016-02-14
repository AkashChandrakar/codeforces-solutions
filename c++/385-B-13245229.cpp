#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<int> v;

int main() {
    string s, subs = "bear";
    cin >> s;
    int occurence = s.find(subs, 0);
    while (occurence != string::npos) {
        v.push_back(occurence);
        occurence = s.find(subs, occurence + 1);
    }
    if (v.size() == 0) {
        cout << "0";
    } else {
        int len = s.length();
        int j = 0;
        int ans = 0;
        for (int i = 0; i < len && j < v.size(); ++i) {
            if (i == v[j]) {
                ans += (len - (i + 3));
                ++j;
            } else {
                ans += (len - (v[j] + 3));
            }
        }
        cout << ans;
    }
    return 0;
}