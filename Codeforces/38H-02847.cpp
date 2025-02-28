#include <bits/stdc++.h>
const int maxn=2*1e5+9;
using namespace std;
int n, k, a[maxn];
bool check(int mid)
{
    long long i=n/2+1, step=0;
    while(a[i]<mid&&i<=n)
    {
        step+=mid-a[i];
        i++;
    }
    if(step<=k)
        return true;
    else
        return false;
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for(int i=1; i<=n; i++)
        cin >> a[i];
    sort(a+1, a+1+n);
    long long low=1, high=2e9, res=0;
    while(low<=high)
    {
        long long mid=(low+high)/2;
        if(check(mid))
        {
            res=mid;
            low=mid+1;
        }
        else
            high=mid-1;
    }
    cout << res;
    return 0;
}
