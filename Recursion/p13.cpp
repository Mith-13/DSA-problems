// find the subset of any set using recursion

// pattern of pick and not pick

#include<bits/stdc++.h>
using namespace std;
vector<int> sub(int ind,vector<int> &s,int a[],int n){
    if(ind==n)
    {
    
        for (int i = 0; i < s.size(); i++)
        {
           cout<<s[i];
        }
      
        cout<<endl;
        return s;
    }

    s.push_back(a[ind]);
    sub(ind+1,s,a,n);
    s.pop_back();
    sub(ind + 1, s, a, n);
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int>s;
    sub(0,s,a,n);
    return 0;
}
