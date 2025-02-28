#include<bits/stdc++.h>
#define int long long
using namespace std;

const int N = 2e5 + 25;
int n, a[N], b[N];

int check()
{
    int cnt = 0;

    for(int i = 1; i <= n; i++)
    {
        if(a[i] % 2 == 0)
            cnt++;
    }

    return cnt;
}

void Read()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
}

void Solve()
{
    int x = check();
    if(x == 0)
        cout << 0 << '\n';
    else if(x > 0 && x < n)
        cout << x << '\n';
    else
    {
        fill(b + 1, b + N, 0);
        for(int i = 1; i <= n; i++)
        {
            while(a[i] % 2 == 0)
            {
                b[i]++;
                a[i] /= 2;
            }
        }

        int t = *min_element(b + 1, b + 1 + n);
        cout << x + t - 1 << '\n';
    }
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
