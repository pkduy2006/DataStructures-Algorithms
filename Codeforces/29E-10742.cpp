#include <bits/stdc++.h>
using namespace std;
int n, a[101];
int kayak(int l, int h)
{
    int ans=0;
    vector <int> t;
    for(int c=1; c<=n; c++)
    {
        if(c!=l&&c!=h)
            t.push_back(a[c]);
    }
    for(int c=0; c<t.size()-1; c+=2)
        ans+=(t[c+1]-t[c]);
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int res=99999;
    cin >> n;
    n*=2;
    for(int i=1; i<=n; i++)
        cin >> a[i];
    sort(a+1, a+1+n);
    for(int i=1; i<n; i++)
    {
        for(int j=i+1; j<=n; j++)
            res=min(res, kayak(i, j));
    }
    cout << res;
    return 0;
}
