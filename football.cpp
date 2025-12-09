#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    map<string,int> mp;
    while(n--){
        string s; cin >> s;
        mp[s]++;
    }
    string ans;
    int mx = 0;
    for(auto p : mp){
        if(p.second > mx){
            mx = p.second;
            ans = p.first;
        }
    }
    cout << ans;
}
