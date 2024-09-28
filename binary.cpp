#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    for(int i=8;i>=0;i--){
        s=((n>>i)&1);
    }
    for(int i=0;i<s.size();i++){
        int count=0;
        if(s[i]){
            count++;
        }
    }
    if(count==1){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }

}