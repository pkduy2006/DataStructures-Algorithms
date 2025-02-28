#include <bits/stdc++.h>
#define int long long
using namespace std;

int n;

void Read()
{
    cin >> n;
}

void Solve()
{
    if(n == 2 || n == 1)
        cout << 3 << '\n';
    else if(n % 2 == 1)
        cout << 1 << '\n';
    else
    {
        int res = 0;
        while(true)
        {
            if(n % 2 == 0)
                res++;
            else
                break;

            if(n == 2)
                break;

            n /= 2;
        }

        res--;
        if(n == 2)
            cout << (2 << res) + 1 << '\n';
        else
            cout << (2 << res) << '\n';
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
