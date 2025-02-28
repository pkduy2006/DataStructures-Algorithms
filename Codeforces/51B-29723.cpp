#include <bits/stdc++.h>
#define int long long
using namespace std;
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int ntest;
    cin >> ntest;
    while(ntest--)
    {
        int n, x, y, z, total = 0;
        cin >> n >> x >> y;
        for(int i = 1; i <= n; i++)
        {
            cin >> z;
            total+=z;
        }

        if((total + x + y) % 2 == 0)
            cout << "Alice" << '\n';
        else
            cout << "Bob" << '\n';
    }

    return 0;
}
