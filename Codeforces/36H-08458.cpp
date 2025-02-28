#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = 2 * 1e5 + 96;
int mark[N], a[N], res = -1;

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int ntest;
    cin >> ntest;

    while(ntest--)
    {
        int n, cnt = 1, res = -1;
        cin >> n;
        for(int i = 1; i <= n; i++)
            cin >> a[i];

        sort(a + 1, a + 1 + n);

        for(int i = 1; i < n; i++)
        {
            if(a[i] == a[i + 1])
                cnt++;
            else
                cnt = 1;

            if(cnt >= 3)
            {
                res = a[i];
                break;
            }
        }

        cout << res << '\n';
    }

    return 0;
}
