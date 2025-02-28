#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 501;

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int ntest;
    cin >> ntest;
    while(ntest--)
    {
        int n, k;
        vector<bool> mark(300000, true);
        cin >> n >> k;
        if(n % 2 != 0 && k != 1)
            cout << "NO" << '\n';
        else
        {
            cout << "YES" << '\n';
            if(k == 1)
            {
                for(int i = 1; i <= n; i++)
                    cout << i << '\n';
            }
            else
            {
                for(int i = 1; i <= n * k; i++)
                {
                    if(mark[i] == true)
                    {
                        for(int j = i; j <= n * k; j+=2)
                        {
                            cout << j << ' ';
                            mark[j] = false;
                        }
                        cout << '\n';
                    }
                }
            }
        }
    }
    return 0;
}
