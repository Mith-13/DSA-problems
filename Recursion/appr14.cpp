#include<bits/stdc++.h>
using namespace std;
bool subseq(int ind, int a[], vector<int> &ds, int n, int target, int sum)
{
    if (n == ind)
    {
        if (target == sum)
        {
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
            return true;
        }
        else
        {
        return false;
        }
    }
    ds.push_back(a[ind]);
    sum += a[ind];
    if(subseq(ind + 1, a, ds, n, target, sum)==true){
        return true;
    }
    ds.pop_back();
    sum -= a[ind];
    if(subseq(ind + 1, a, ds, n, target, sum)==true){
        return true;
    }
    return false;
}
int main(){
    int n,target;
    cin>>n>>target;
    int a[n];
    for(int i=0;i<n;i++){ 
        cin>>a[i];
    }
    vector<int>ds;
    subseq(0,a,ds,n,target,0);
}