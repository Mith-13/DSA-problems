#include<bits/stdc++.h>
using namespace std;
char lower(char c){
    return (c-'A')+'a';
}
bool palindrome(string s){ 
    for (int i = 0; i <= s.size() / 2; i++)
    {
        if (s[i] != s[s.size() - i - 1])
        {
            return false;;
        }
    }
    return true;
}
string conversion(string s){
    string result;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ',' || s[i] == ' ' || s[i] == ':')
        {
            continue;
        }
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            result+= lower(s[i]);
        }
        else{
            result+=s[i];
        }
    }
    return result;
    }
int main(){  
    string s;
    getline(cin,s);
    string result=conversion(s);
    cout<<palindrome(result);
}