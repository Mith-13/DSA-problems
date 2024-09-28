// print number from  1 to N.

#include<bits/stdc++.h>
using namespace std;
int fn(int i,int n){
    if(i>n){
        return -1;
    }
    cout<<i<<endl;
    fn(i+1,n);
}
int main(){
    int n;
    cin>>n;
    fn(1,n);
}