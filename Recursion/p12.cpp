#include<bits/stdc++.h>
using  namespace std;
int f(int n){
    if(0<=n<=1) return n;
    int first=f(n-1);
    int last=f(n-2);
    return first+last;
}
int main(){
    int n;
    cin>>n;
    cout<<f(n);
}

// t.c(0(2^n)) exponential