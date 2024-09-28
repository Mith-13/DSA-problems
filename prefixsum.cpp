/* Given array a of N integer.Given Q queries
and in each query given L and R print sum of array element 
from index L to R */.

/* 1 < N <10^5
1< A[i]<=10^9
1<=Q <=10^5
1<=L,R<=N */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        long long sum=0;
        for(int i=l;i<=r;i++){
            sum=sum+a[i];
        }
        cout<<sum<<endl;
    }
}
