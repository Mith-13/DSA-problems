// coutn the number of sequence which satisfy this condition

#include <bits/stdc++.h>
using namespace std;
int subseq(int ind, int a[] ,int n, int target, int sum)
{
    if (n == ind)
    {
        if (target == sum)
        { 
             return 1;
        }
            /*
            cout << "[";
            for (int i = 0; i < ds.size(); i++)
            {
         
            }
            cout << "]";
            cout << endl;
            return true;
        }*/
        else
        {
            return 0;
        }
    }
    sum += a[ind];
    int l=(subseq(ind + 1, a, n, target, sum));
    sum -= a[ind];
    int r= (subseq(ind + 1, a, n, target, sum));
    return l+r;
}
int main()
{
    int n, target;
    cin >> n >> target;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout<<subseq(0, a, n, target, 0);
}