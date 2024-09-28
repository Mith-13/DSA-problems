#include<bits/stdc++.h>
using namespace std;

int main(){
     string s,s1;
     cin>>s;
     int ans;
     for(int i=0;i<=s.size()/2;i++){
        if(s[i]!=s[s.size()-1-i]){
            cout<<"no it is not palindrome";
        }
     }
            cout<<"it is palindrome";
     }
