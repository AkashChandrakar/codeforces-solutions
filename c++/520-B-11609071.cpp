#include <bits/stdc++.h>
using namespace std;
int dist[10010];
const int INF=INT_MAX/2;
int main() {
	int s,t,n;
	cin>>s>>t;
	queue<int> Q;
	fill(dist,dist+10010,INF);
	dist[s]=0;
	Q.push(s);
	while(!Q.empty()){
		n = Q.front();
		Q.pop();
		if(n==t) break;
		if(n>1 && dist[n-1]==INF){
			dist[n-1] = dist[n]+1;
			Q.push(n-1);
		}
		if(dist[2*n]==INF){
			dist[2*n] =dist[n]+1;
			Q.push(2*n);
		}
	}
	cout<<dist[t];
	return 0;
}