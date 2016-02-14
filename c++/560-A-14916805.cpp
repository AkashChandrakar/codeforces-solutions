#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<int> v;

int main() {
    int n, elm;
    cin >> n;
    bool ans = 0;
    for (int i = 0; i < n; ++i) {
        cin >> elm;
        if (elm == 1)
            ans = 1;
    }
    if (ans)
        printf("-1");
    else
        printf("1");
    return 0;
}