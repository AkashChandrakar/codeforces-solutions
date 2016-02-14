#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<int> v;

int main() {
    int n, elm, m;
    cin >> n >> m;
    int days = 0;
    while (n) {
        --n;
        ++days;
        if (days % m == 0)
            ++n;
    }
    cout << days;
    return 0;
}