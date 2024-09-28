/*Given array a of n integer
.Given Q queries and in each query a number X,
print count of that number in array

Constraints
1 <= N <=10^5
1 <= a[i] <=10^7
1 <= Q <=10^5
time_limit < 1 sec
*/
/* #include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        int ct=0;
        for(int i=0;i<n;i++){
            if(a[i]==x){
                ct++;
            }
        }
        cout<<ct;
        cout<<endl;
    
    }

}*/

// 0(N)+0(Q*N) =0(n^2)
#include<bits/stdc++.h>
using namespace std;
const int N=1e7+10;
int hash[N];
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        hash[a[i]]+=1;
    }
    while (q--)
    {
        int x;
        cin >> x;
        cout<<hash[x]<<endl;
    }
}
//  0(N)+0(Q)<10^7 so it runs i 1 sec

