// print name upto n times

#include<bits/stdc++.h>
using namespace std;
void fn(int i,int n){
    if(i>n){
        return ;
    }
    cout<<"Mithilesh"<<endl;
    fn(i+1,n);
}
int main(){
    int n;
    cin>>n;
    fn(1,n);
}