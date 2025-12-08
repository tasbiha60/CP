#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x;
    cin >> n;
    bool hard = false;
    while(n--){
        cin >> x;
        if(x == 1) hard = true;
    }
    cout << (hard ? "HARD" : "EASY");
}
