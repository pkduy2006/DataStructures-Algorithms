#include <bits/stdc++.h>
#define int long long
using namespace std;
vector<int> a;
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int ntest;
    cin >> ntest;
    while(ntest--)
    {
        a.clear();
        int x, y, z;
        cin >> x >> y >> z;
        a.push_back(x);
        a.push_back(y);
        a.push_back(z);
        sort(a.begin(), a.end());
        if((a[2] == a[0] + a[1]) || (a[0] == a[1] && a[2] % 2 == 0) || (a[1] == a[2] && a[0] % 2 == 0) || (a[0] == a[2] && a[1] % 2 == 0))
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}
