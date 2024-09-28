#include<bits/stdc++.h>
using namespace std;
int main(){
   /*char a[10]={1,2,3};
   int size=sizeof(a)/sizeof(a[0]);
   cout<<size<<endl;
   */
  string s;
  getline(cin,s,"@40");
  for(int i=0;i<s.size();i++){
    if(s[i]=='.'){
      s.push_back('@');
      s.push_back('4');
      s.push_back('0');
    }
    cout<<s;
  }
}
