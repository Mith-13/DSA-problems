// check palindrome or not using recursion
#include<bits/stdc++.h>
using namespace std;
bool palindrome(string &s,int i){
    if(i>s.size()/2){
        return true;
    }
    if(s[i]!=s[s.size()-i-1])
    {
        return false;
        }
    palindrome(s,i+1);
}
int main(){
    string s;
    cin>>s;
    cout<<palindrome(s,0);

}