#include <bits/stdc++.h>
using namespace std;
void sub(int ind, int s, int a[], int n,vector<int> &add)
{
    if (ind == n)
    {
       add.push_back(s);
        return ;
    }
    sub(ind + 1, s+a[ind], a, n,add);
    sub(ind + 1, s, a, n,add);
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> add;
    sub(0, 0, a, n, add);
    sort(add.begin(),add.end());
    for (int i = 0; i < add.size(); i++)
    {
        cout << add[i];
    }
    cout << endl;
    return 0;
}
