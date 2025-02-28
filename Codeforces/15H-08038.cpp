#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = 1e2 + 25;
int a[N], n;

bool check(int m, int k)
{
    for(int i = k; i <= n; i += 2)
    {
        if(a[i] % m == 0)
            return false;
    }

    return true;
}

void Read()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
}

void Solve()
{
    int m = a[2];
    for(int i = 4; i <= n; i += 2)
        m = __gcd(m, a[i]);

    int t = a[1];
    for(int i = 3; i <= n; i += 2)
        t = __gcd(t, a[i]);

    if(check(m, 1))
    {
        cout << m << '\n';
        return;
    }
    else if(check(t, 2))
        cout << t << '\n';
    else
        cout << 0 << '\n';
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
        Read();

        Solve();
    }

    return 0;
}
