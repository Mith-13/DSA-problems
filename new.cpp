#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        vector<int> hash(1000000, 0);
        for(int i=0;i<n;i++){
            cin>>a[i];
            hash[a[i]+1000]++;
        }
        int max = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (hash[i] > max)
            {
                max = i;
            }
        }
        cout<<max;
    }
}