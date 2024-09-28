// print all subsequence which is equal to target value

#include <bits/stdc++.h>
using namespace std;
bool flag = false;
void subseq(int ind, int a[], vector<int> &ds, int n, int target, int sum)
{
    if (n == ind)
    {
        if (target == sum && flag == false)
        {
            flag = true;
            cout << "[";
            for (int i = 0; i < ds.size(); i++)
            {
                if (i < ds.size() - 1)
                {
                    cout << ds[i] << ",";
                }
                else
                {
                    cout << ds[i];
                }
            }
            cout << "]";
            cout << endl;
        }
        return;
    }
    ds.push_back(a[ind]);
    sum += a[ind];
    subseq(ind + 1, a, ds, n, target, sum);
    ds.pop_back();
    sum -= a[ind];
    subseq(ind + 1, a, ds, n, target, sum);
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
    vector<int> ds;
    subseq(0, a, ds, n, target, 0);
}