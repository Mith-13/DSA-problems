#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int pf[N];
int a[N];
int main(){
    int n;
    cin>>n;
    pf[0]=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        pf[i]=pf[i-1]+a[i];
    }
    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        cout<<pf[r]-pf[l-1]<<endl;
    }

}