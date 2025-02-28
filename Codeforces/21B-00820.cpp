#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = 298;
int a[N][N], sumRT[N][N], sumRD[N][N], sumLT[N][N], sumLD[N][N];

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int ntests;
    cin >> ntests;
    while(ntests--)
    {
        int n, m, res = 0;
        cin >> n >> m;
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= m; j++)
                cin >> a[i][j];
        }

        for(int i = 0; i <= n + 1; i++)
        {
            for(int j = 0; j <= m + 1; j++)
            {
                sumLD[i][j] = 0;
                sumLT[i][j] = 0;
                sumRD[i][j] = 0;
                sumRT[i][j] = 0;
            }
        }

        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= m; j++)
                sumLT[i][j] = sumLT[i - 1][j - 1] + a[i][j];
        }

        for(int i = n; i >= 1; i--)
        {
            for(int j = 1; j <= m; j++)
                sumLD[i][j] = sumLD[i + 1][j - 1] + a[i][j];
        }

        for(int i = 1; i <= n; i++)
        {
            for(int j = m; j >= 1; j--)
                sumRT[i][j] = sumRT[i - 1][j + 1] + a[i][j];
        }

        for(int i = n; i >= 1; i--)
        {
            for(int j = m; j >= 1; j--)
                sumRD[i][j] = sumRD[i + 1][j + 1] + a[i][j];
        }

        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= m; j++)
                res = max(res, sumLT[i][j] + sumLD[i][j] + sumRT[i][j] + sumRD[i][j] - 3 * a[i][j]);
        }

        cout << res << '\n';
    }

    return 0;
}
