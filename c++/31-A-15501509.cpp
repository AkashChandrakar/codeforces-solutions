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
	int n,elm;
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>elm;
		v.push_back(elm);
	}
	int ans=0,a,b,c;
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			for(int k=0;k<n;++k){
				if(i!=j && j!=k && i!=k){
					if(v[i] ==(v[j] + v[k])){
						a=i+1;
						b=j+1;
						c=k+1;
						ans=1;
					}
				}
			}
		}
	}
	if(!ans) cout<<"-1";
	else cout<<a<<" "<<b<<" "<<c<<endl;
	return 0;
}