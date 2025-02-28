#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = 96;
int a[N];

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int ntest;
    cin >> ntest;

    while(ntest--)
    {
        int n, odd = 0, even = 0;
        bool check = false;
        cin >> n;
        for(int i = 1; i <= n; i++)
            cin >> a[i];

        for(int i = 1; i <= n; i+=2)
        {
            if(a[i] % 2 == 0)
                even++;
            else
                odd++;
        }

        if(odd >= 1 && even >= 1)
            check = true;

        odd = 0;
        even = 0;
        for(int i = 2; i <= n; i+=2)
        {
            if(a[i] % 2 == 0)
                even++;
            else
                odd++;
        }

        if(odd >= 1 && even >= 1)
            check = true;

        if(check == false)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
