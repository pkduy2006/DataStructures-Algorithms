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
        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];

        sort(a.begin(), a.end());

        if(a.size() == 1)
        {
            if(a[0] == 1)
                cout << "YES" << '\n';
            else
                cout << "NO" << '\n';
        }
        else
        {
            sort(a.begin(), a.end());

            if(a[a.size() - 1] - a[a.size() - 2] >= 2)
                cout << "NO" << '\n';
            else
                cout << "YES" << '\n';
        }
    }

    return 0;
}
