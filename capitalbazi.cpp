#include <bits/stdc++.h>
using namespace std;
void uppar(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]==' '){
            cout<<endl;
        }
        s[i] = 'A' + s[i] - 'a';
        cout<<s[i];
    }
}
int main()
{
    string s;
    getline(cin,s);
    uppar(s);
    return 0;
}
