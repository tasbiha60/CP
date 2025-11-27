#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>>v(n);
    for(int i=0;i<v.size();i++){
    cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
    cout<<v.size()<<endl;
    return 0;
}
