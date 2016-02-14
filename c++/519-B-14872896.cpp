#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<int> v1, v2, v3;

int main() {
    int n, elm, num1, num2, p1, p2, p3;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> elm;
        v1.push_back(elm);
    }
    for (int i = 0; i < n - 1; ++i) {
        cin >> elm;
        v2.push_back(elm);
    }
    for (int i = 0; i < n - 2; ++i) {
        cin >> elm;
        v3.push_back(elm);
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    sort(v3.begin(), v3.end());
    p1 = p2 = 0;
    while (p1 < v1.size() && p2 < v2.size()) {
        if (v1[p1] != v2[p2]) {
            num1 = v1[p1];
            break;
        }
        ++p1;
        ++p2;
    }
    if (p2 == n - 1)
        num1 = v1[p1];
    p2 = p3 = 0;
    while (p2 < v2.size() && p3 < v3.size()) {
        if (v2[p2] != v3[p3]) {
            num2 = v2[p2];
            break;
        }
        ++p2;
        ++p3;
    }
    if (p3 == n - 2)
        num2 = v2[p2];
    cout << num1 << " " << num2;
    return 0;
}