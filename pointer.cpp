#include<bits/stdc++.h>
using namespace std;
int main(){
    int x=4;
    int *p=&x;
    cout<<"value of x "<<x<<endl;
    cout<<"address of x "<<&x<<endl;
    cout<<"value at p "<<p<<endl;
    cout<<*p<<endl;
    *p=5;
    cout<<x<<endl;
    int **P=&p;
    cout<<p<<endl;
    cout<<**P<<endl;

}