#include <bits/stdc++.h>
#define int long long
using namespace std;

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int ntests;
    cin >> ntests;
    while(ntests--)
    {
        int x, y;
        cin >> x >> y;

        if(y % x != 0)
            cout << 0  << ' ' << 0 << '\n';
        else
            cout << 1 << ' ' << y / x << '\n';
    }

    return 0;
}
