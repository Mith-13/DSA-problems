// print number from N to 1.

#include<bits/stdc++.h>
using namespace std;
int fn(int i,int n){
    if(i<1){
        return -1;
    }
    cout<<i<<endl;
    fn(i-1,n);
}
int main(){
    int n;
    cin>>n;
    fn(n,n);
}
