#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;

int main() {
    int n, x;
    cin >> n;
    vector<int> pve, neg, zro;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        if (x == 0)
            zro.push_back(x);
        else if (x > 0)
            pve.push_back(x);
        else
            neg.push_back(x);
    }
    if (pve.size() == 0) {
        x = neg[0];
        pve.push_back(x);
        x = neg[1];
        pve.push_back(x);
        neg.erase(neg.begin() + 0);
        neg.erase(neg.begin() + 0);
    }
    cout << "1 " << neg[0] << endl;
    cout << pve.size() << " ";
    for (int i = 0; i < pve.size(); ++i) {
        cout << pve[i] << " ";
    }
    cout << endl;
    cout << neg.size() + zro.size() - 1 << " ";
    for (int i = 1; i < neg.size(); ++i) {
        cout << neg[i] << " ";
    }
    for (int i = 0; i < zro.size(); ++i) {
        cout << zro[i] << endl;
    }
    return 0;
}