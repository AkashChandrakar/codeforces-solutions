// Competetive Programming.cpp : Defines the entry point for the console application.
//

#include<iostream>
#include<fstream>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;
const int sz=100010;
vector<int> v;

int main()
{
	//ifstream cin("input.txt");
	//ofstream cout("output.txt");
	int a,b,c,n;
	int sa,sb,sc;
	cin>>n;
	sa=sb=sc=0;
	while(n--){
		cin>>a>>b>>c;
		sa+=a;
		sb+=b;
		sc+=c;
	}
	if(!(sa||sb||sc)) cout<<"YES";
	else cout<<"NO";
	return 0;
}