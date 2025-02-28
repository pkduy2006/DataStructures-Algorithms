#include <bits/stdc++.h>
#define int long long
using namespace std;
int a[200005], n, m, k;
bool check(int t)
{
    int cnt=1, weight=0;
    for(int i=t+1; i<=n; i++)
    {
        if(weight+a[i]<=k)
            weight+=a[i];
        else
        {
            cnt++;
            weight=a[i];
        }
    }
    return cnt<=m;
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m >> k;
    for(int i=1; i<=n; i++)
        cin >> a[i];
    int l=0, r=n, res=n;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(check(mid))
        {
            res=mid;
            r=mid-1;
        }
        else
            l=mid+1;
    }
    cout << n-res;
    return 0;
}
