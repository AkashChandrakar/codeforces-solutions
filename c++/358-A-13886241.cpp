#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> ii;
vector<ii> v;
vector<int> points;
int main() {
    int n, e;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> e;
        points.push_back(e);
    }
    for (int i = 1; i < n; ++i) {
        if (points[i - 1] < points[i])
            v.push_back(ii(points[i - 1], points[i]));
        else
            v.push_back(ii(points[i], points[i - 1]));
    }

    bool f = 0;
    for (int i = 0; i < v.size(); ++i) {
        for (int j = i + 1; j < v.size(); ++j) {
            if (v[i].first == v[j].first || v[i].second == v[j].second)
                continue;
            if (v[i].first < v[j].first && v[j].first < v[i].second
                    && v[i].second < v[j].second)
                f = 1;
            if (v[j].first < v[i].first && v[i].first < v[j].second
                    && v[j].second < v[i].second)
                f = 1;
        }
    }
    if (f)
        cout << "yes";
    else
        cout << "no";
    return 0;
}