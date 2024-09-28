#include <bits/stdc++.h>

using namespace std;
const int n = 1e7 + 10;
long long ar[n + 10];
int main()
{
    long long n, m;
    cin >> n >> m;
    for(int i=1;i<n;i++){
        cin>>ar[i];
    }
    while (m--)
    {
        int a, b, d;
        cin >> a >> b >> d;
        ar[a] += d;
        ar[b + 1] -= d;
    }
    for (int i = 1; i <= n; i++)
    {
        ar[i] += ar[i - 1];
    }
    long long mx = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        if (ar[i] > mx)
        {
            mx = ar[i];
        }
    }
    cout << mx << endl;
}
