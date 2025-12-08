#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int cnt = 0;
    int a[5] = {100, 20, 10, 5, 1};
    for(int i = 0; i < 5; i++){
        cnt += n / a[i];
        n %= a[i];
    }
    cout << cnt;
}
