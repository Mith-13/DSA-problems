#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int c_th;
    for (int i = 1; c >= 0; i++)
    {
        if (i % a == 0 || i % b == 0)
        {
            c--;
            if(c==0){
            c_th = i;
            }
        }
    }
    int lcm;
    for (int i = 1; i <= a * b; i++)
    {
        if (i % a == 0 && i % b == 0)
        {
            lcm = i;
            break;
        }
    }
    int step;
    if (c_th % a == 0 && c_th % b == 0)
    {
        step = lcm;
    }
    else if (c_th % a == 0)
    {
        step = a;
    }
    else if(c_th % b==0)
    {
        step = b;
    }
    for (int i = c_th; i >= 0; i = i - step)
    {
        cout << i << " ";
    }
}