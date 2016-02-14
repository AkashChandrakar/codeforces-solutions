#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> ii;
vector<ii> v;
int main() {
    int n;
    cin >> n;
    int elm;
    for (int i = 1; i <= n; ++i) {
        cin >> elm;
        v.push_back(ii(elm, i));
    }
    sort(v.begin(), v.end());
    elm = v[0].first;
    int cnt = 0;
    for (int i = 1; i < n; ++i) {
        if (v[i].first == elm)
            ++cnt;
        elm = v[i].first;
    }
    if (cnt < 2)
        cout << "NO";
    else {
        cout << "YES" << endl;
        for (int i = 0; i < n; ++i) {
            cout << v[i].second << " ";
        }
        cout << endl;
        elm = 0;
        int j = 1;
        while (v[elm].first != v[j].first) {
            ++elm;
            ++j;
        }
        for (int i = 0; i < n; ++i) {
            if (i == elm) {
                cout << v[elm + 1].second << " ";
                cout << v[elm].second << " ";
                ++i;
            } else {
                cout << v[i].second << " ";
            }
        }
        cout << endl;
        elm = n - 1;
        j = n - 2;
        while (v[elm].first != v[j].first) {
            --elm;
            --j;
        }
        for (int i = 0; i < n; ++i) {
            if (i == j) {
                cout << v[j + 1].second << " ";
                cout << v[j].second << " ";
                ++i;
            } else {
                cout << v[i].second << " ";
            }
        }
    }
    return 0;
}