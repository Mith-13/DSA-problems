#include <bits/stdc++.h>
using namespace std;
void multiple(int a[100], int n)
{
    long long M = 1;
    for (int i = 0; i <n; i++)
    {
        M = M *1LL* a[i];
    }
    int N=M%10;
    if (N== 2 || N== 3 || N== 5)
    {
        cout<< "YES"<<endl;
    }
    else
    {
        cout<< "NO"<<endl;
    }
}
int main()
{
    int t;
    cin >> t;
    t--;
    while (t!=0)
    {
        int n;
        cin >> n;
        int a[100];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        multiple(a, n);
    }
}