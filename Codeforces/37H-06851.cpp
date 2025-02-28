#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = 15e4 + 98;
int cnt, total, sum[N];

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int ntests;
    cin >> ntests;
    while(ntests--)
    {
        int n, q;
        cin >> n >> q;
        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.rbegin(), a.rend());
        for(int i = 0; i < n; i++)
            sum[i] = sum[i - 1] + a[i];

        while(q--)
        {
            int t;
            cin >> t;
            int l = 0, r = n - 1, ans = -1;

            while(l <= r)
            {
                int mid = (l + r) / 2;

                if(sum[mid] >= t)
                {
                    ans = mid;
                    r = mid - 1;
                }
                else
                    l = mid + 1;
            }

            if(ans != -1)
                cout << ans + 1 << '\n';
            else
                cout << -1 << '\n';
        }
    }

    return 0;
}
