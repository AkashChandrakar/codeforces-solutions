#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
int start[50], finish[50], allocate[50];
int main() {
    int sum, d;
    cin >> d >> sum;
    for (int i = 0; i < d; ++i) {
        cin >> start[i] >> finish[i];
    }
    for (int i = 0; i < d; ++i) {
        allocate[i] = start[i];
        sum -= start[i];
    }
    if (sum < 0) {
        cout << "NO";
        return 0;
    }
    for (int i = 0; i < d; ++i) {
        if (sum <= (finish[i] - allocate[i])) {
            allocate[i] += sum;
            sum = 0;
            break;
        } else {
            sum -= (finish[i] - allocate[i]);
            allocate[i] = finish[i];
        }
    }
    if (sum == 0) {
        cout << "YES\n";
        for (int i = 0; i < d; ++i) {
            cout << allocate[i] << " ";
        }
    } else {
        cout << "NO";
    }
    return 0;
}