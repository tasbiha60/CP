#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> a(n);
    for(int &x : a) cin >> x;
    sort(a.rbegin(), a.rend());

    int sum = accumulate(a.begin(), a.end(), 0);
    int cur = 0, cnt = 0;
    for(int x : a){
        cur += x;
        cnt++;
        if(cur > sum - cur) break;
    }
    cout << cnt;
}
