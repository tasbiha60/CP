#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n), ans(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        ans[a[i] - 1] = i + 1;
    }
    for(int x : ans) cout << x << " ";
}
