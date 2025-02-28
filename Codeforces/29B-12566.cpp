#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = 58;
int ntests, a[N], n;

void Read()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
}

void Solve()
{
    bool check = false;
    int sum = 0;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(i == j)
                continue;

            sum += a[j];
        }

        if(sum == a[i] * (n - 1))
        {
            check = true;
            break;
        }

        sum = 0;
    }

    if(check == true)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
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
