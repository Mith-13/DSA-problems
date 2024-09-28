// print the sum of n numbers using parmeterical form
#include<bits/stdc++.h>
using namespace std;
int fn(int i,int sum){
    if(i<1){
        cout<< sum;
        return sum;
    }
    fn(i-1,sum+i);
}
int main(){
    int n;
    cin>>n;
    fn(n,0);
}