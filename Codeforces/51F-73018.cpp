#include <bits/stdc++.h>
#define int long long
using namespace std;
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    int res=1e7;
    cin >> s;
    for(int i='a'; i<='z'; i++)
    {
        int ans=0, cnt=0;
        for(int j=0; j<s.size(); j++)
        {
            if(s[j]==i)
                ans=0;
            else
                ans++;
            cnt=max(ans, cnt);
        }
        res=min(res, cnt);
    }
    cout << res+1;
    return 0;
}
