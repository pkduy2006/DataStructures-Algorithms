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
        int n, res = 0;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];

        int t = *min_element(a.begin(), a.end());
        for(int i = 0; i < n; i++)
            res += (a[i] - t);

        cout << res << '\n';
    }

    return 0;
}
