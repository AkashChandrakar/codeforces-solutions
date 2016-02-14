#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    map<string, string> hash;
    string key, value;
    for (int i = 0; i < m; ++i) {
        cin >> key >> value;
        hash[key] = value;
    }
    for (int i = 0; i < n; ++i) {
        cin>>key;
        value = hash[key];
        if(value.length()<key.length()){
            cout<<value<<" ";
        }else
            cout<<key<<" ";
    }
    return 0;
}