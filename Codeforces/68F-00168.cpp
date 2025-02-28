#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = 2e5 + 98;
pair <int, int> a[N];

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int ntests;
    cin >> ntests;

    while(ntests--)
    {
        int n, k, cnt = 1, res = 1, posAns = 0, pos = 0;
        cin >> n >> k;
        vector<int> a(n), s;
        map<int, int> mark;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            mark[a[i]]++;
        }

        for(auto i : mark)
        {
            if(i.second >= k)
                s.push_back(i.first);
        }

        if(s.size() == 0)
            cout << -1 << '\n';
        else
        {
            sort(s.begin(), s.end());
            for(int i = 0; i < s.size() - 1; i++)
            {
                if(s[i + 1] - s[i] == 1)
                {
                    cnt++;
                    if(cnt > res)
                    {
                        res = cnt;
                        posAns = pos;
                    }
                }
                if(s[i + 1] - s[i] > 1)
                {
                    cnt = 1;
                    pos = i + 1;
                }

                //cout << cnt << ' ' << pos << ' ' << posAns << res << ' ' << '\n';
            }

            cout << s[posAns] << ' ' << s[posAns] + res - 1 << '\n';
        }
    }

    return 0;
}
