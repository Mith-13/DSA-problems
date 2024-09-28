/* given a number N.Print itd factorial
Constraints
1<=N<=100.

Print answer module M
where M=47
A % M
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin>>N;
    int M=47;
    long long fact=1;
    for(int i=2;i<=N;i++){
        fact=(fact*i) % M;
    }
    cout<<fact;
}

/* if we print the factorial 
of number greeater than 20 it gives negtive value
so for avoid this ans check the result will
 be correct so we use module operator 
 bcz it gives ans less than M*/