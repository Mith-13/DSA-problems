// factorial using recursion of n number using functional form
#include<bits/stdc++.h>
using namespace std;
int f(int n){
    if(n==1 || n==0){
        return 1;
    }
    return n*f(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<f(n);
}