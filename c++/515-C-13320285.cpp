#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<int> v;
int cnt[10];
map<int, string> h;
void init() {
    h[2] = "2";
    h[3] = "3";
    h[4] = "322";
    h[5] = "5";
    h[6] = "53";
    h[7] = "7";
    h[8] = "7222";
    h[9] = "7332";
}
int main() {
    int n;
    init();
    string s;
    cin >> n;
    cin >> s;
    for (int i = 0; i < n; ++i) {
        int idx = s[i] - '0';
        cnt[idx]++;
    }
    string ans = "";
    for (int i = 2; i < 10; ++i) {
        while (cnt[i]) {
            ans = ans + h[i];
            --cnt[i];
        }
    }
    sort(ans.begin(), ans.end());
    reverse(ans.begin(), ans.end());
    cout << ans;
    return 0;
}