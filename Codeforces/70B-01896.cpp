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
        int a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;

        if(max(0ll, x - a) + max(0ll, y - b) <= c)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }

    return 0;
}
