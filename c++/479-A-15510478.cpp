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

int maximum(int a,int b,int c){
	int u,v,w,x;
	u = (a+b>a*b)?a+b:a*b;
	v = (b+c>b*c)?b+c:b*c;
	w = (u+c>u*c)?u+c:u*c;
	x = (a+v>a*v)?a+v:a*v;
	return max(w,x);
}
int main()
{
	//ifstream cin("input.txt");
	//ofstream cout("output.txt");
	int a,b,c;
	cin>>a>>b>>c;
	cout<<maximum(a,b,c);
	return 0;
}