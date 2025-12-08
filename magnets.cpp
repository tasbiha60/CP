#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string prev, cur;
    int cnt = 1;
    cin >> prev;
    for(int i = 1; i < n; i++){
        cin >> cur;
        if(cur != prev) cnt++;
        prev = cur;
    }
    cout << cnt;
}
