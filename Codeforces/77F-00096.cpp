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
        int a, b;
        cin >> a >> b;
        if(a == 0)
            cout << 1;
        else
            cout << a + b * 2 + 1;
        cout << '\n';
    }

    return 0;
}
