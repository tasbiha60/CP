#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    int cnt = 0;
    while(n){
        int d = n % 10;
        if(d == 4 || d == 7) cnt++;
        n /= 10;
    }
    cout << (cnt == 4 || cnt == 7 ? "YES" : "NO");
}
