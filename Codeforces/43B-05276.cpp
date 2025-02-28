#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = 1e5 + 25;
int n, a[N];

void Read()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
}

void Solve()
{
    int i = 1, res = 0;
    while(i < n)
    {
        if(a[i] > a[i + 1])
        {
            res++;
            i+=2;
        }
        else
            i++;
    }

    cout << res << '\n';
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
