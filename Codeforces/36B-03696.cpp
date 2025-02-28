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
        int n;
        cin >> n;

        if(n >= 1900)
            cout << "Division 1\n";
        else if(1600 <= n && n <= 1899)
            cout << "Division 2\n";
        else if(1400 <= n && n <= 1599)
            cout << "Division 3\n";
        else
            cout << "Division 4\n";
    }

    return 0;
}
