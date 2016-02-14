#include <bits/stdc++.h>
using namespace std;
char board[110][110], temp[110][110];
void copy(int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            temp[i][j] = board[i][j];
        }
    }
}

void wipe(int col, int n) {
    for (int i = 0; i < n; ++i) {
        temp[i][col] = (temp[i][col] == '1') ? '0' : '1';
    }
}

int count(int n) {
    int res = 0;
    for (int i = 0; i < n; ++i) {
        int ctr = 0;
        for (int j = 0; j < n; ++j) {
            if (temp[i][j] == '1')
                ++ctr;
        }
        if (ctr == n)
            ++res;
    }
    return res;
}

void disp(int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << temp[i][j];
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> board[i][j];
        }
    }
    int res = 0;
    for (int k = 0; k < n; ++k) {
        //for each configuration
        copy(n);
        for (int j = 0; j < n; ++j) {
            if (temp[k][j] == '0')
                wipe(j, n);
        }
        res = max(res, count(n));
    }
    cout << res;
    return 0;
}