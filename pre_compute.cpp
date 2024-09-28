/* Given  t test cases and in
each test cases a number N.
Print its factorial for each test case 
% M where M=10^9+7 .

Constraints
1 <= T <=10^5
1 <= N <= 10^5;
time limit=1 sec
*/
#include<bits/stdc++.h>
using namespace std;
const int M=1e9+7;
const int N=1e5+10;
long long hash[N];
for()
int main(){
    hash[0]=hash[1]=1;
    for(int i=2;i<N;i++){
        hash[i]=hash[i-1]*i;
    }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<fact[N]<<endl;
    }

}

// 0(T*N)=0(N*N);
/* new complextiy be 0(T)+0(N)==10^5+10^5 it is calculated in 1 sec.*/