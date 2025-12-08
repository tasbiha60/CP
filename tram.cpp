#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b, cur = 0, mx = 0;
    cin >> n;
    while(n--){
        cin >> a >> b;
        cur = cur - a + b;
        mx = max(mx, cur);
    }
    cout << mx;
}
