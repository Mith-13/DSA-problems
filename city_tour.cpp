#include <bits/stdc++.h>
using namespace std;
int count(int n)
{
    int count=0;
    for (int i = -3; i <= n; i++)
    {
        for (int j = -3; j <= n; j++)
        {
            if (i + j == n || i + j = (-(n)))
            {
                count++;
            }
        }
    }
    return count;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        count(n);
    }
}