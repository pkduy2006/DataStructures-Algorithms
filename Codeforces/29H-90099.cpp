#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = 1e5 + 25;
int ntests, a[N];

bool check(int n)
{
    int m = n / 2;

    for(int i = 2; i <= m; i++)
    {
        if(a[i] == a[i + m - 1])
            return true;
    }

    return false;
}

void Read()
{
    cin >> ntests;
}

void Solve()
{
    while(ntests--)
    {
        int n;
        cin >> n;

        for(int i = 1; i <= n; i++)
            cin >> a[i];

        if(n % 2 == 1)
            cout << "NO" << '\n';
        else
        {
            sort(a + 1, a + 1 + n);

            if(check(n))
                cout << "NO" << '\n';
            else
            {
                cout << "YES" << '\n';
                for(int i = 1; i <= n / 2; i++)
                    cout << a[i] << ' ' << a[n / 2 + i] << ' ';
                cout << '\n';
            }
        }
    }
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    Read();

    Solve();

    return 0;
}
