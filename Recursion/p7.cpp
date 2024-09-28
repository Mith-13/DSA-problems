// reverse of an array using recursion
#include<bits/stdc++.h>
using namespace std;
void f(int a[],int n,int l,int r){
    if(r<l){
        return ;
    }
    swap(a[l],a[r]);
    f(a,n,l+1,r-1);
}
int main(){
     int n;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++){
        cin>>a[i];
     }
     f(a,n,0,n-1);
     for (int i = 0; i < n; i++)
     {
         cout<< a[i]<<" ";
     }
}