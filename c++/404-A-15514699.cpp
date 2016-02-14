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
set<char> diagonal,other;
int main()
{
	//ifstream cin("input.txt");
	//ofstream cout("output.txt");
	int n;
	char c,a,b;
	cin>>n;
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			cin>>c;
			if(i==j ||((n-j-1)==i)) diagonal.insert(c),a=c;
			else other.insert(c),b=c;
		}
	}
	if(diagonal.size()==1 && other.size()==1 && a!=b) cout<<"YES";
	else cout<<"NO";
	return 0;
}