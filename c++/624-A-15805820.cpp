#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> v;
int main() {
	double d, l, v1, v2;
	cin >> d >> l >> v1 >> v2;
	v1 += v2;
	l -= d;
	printf("%.6lf", l / v1);
	return 0;
}