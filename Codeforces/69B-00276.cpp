#include <bits/stdc++.h>
#define int long long
using namespace std;

const int INF = 1e9 + 98;

int solve(string a, string b)
{
    int res = 0;

    for(int i = 0; i < a.size(); i++)
    {
        int x = a[i], y = b[i], t;

        if(x - y < 0)
            t = x - y - 2 * (x - y);
        else
            t = x - y;

        res += t;
    }

    return res;
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int ntests;
    cin >> ntests;

    while(ntests--)
    {
        int m, n, ans = INF;
        cin >> n >> m;
        vector<string> s(n);
        for(int i = 0; i < n; i++)
            cin >> s[i];

        for(int i = 0; i < n; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                if(s[i] == s[j])
                    ans = 0;
                else
                    ans = min(ans, solve(s[i], s[j]));
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
