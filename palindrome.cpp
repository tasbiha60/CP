#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<char>v1(s.begin(),s.end());
    vector<char>v2=v1;//just copyong the v1 characer
    reverse(v2.begin(),v2.end());//check the character if reversing
    if(v1==v2){//then compare v1 nd v2
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not Palindrome"<<endl;
    }
    return 0;
}
