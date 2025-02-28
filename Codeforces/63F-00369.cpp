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
        int a[8];
        for(int i = 1; i <= 7; i++)
            cin >> a[i];
        int t = a[7] - a[6];
        bool check = true;
        for(int i = 1; i <= 5; i++)
        {
            for(int j = 1; j <= 5; j++)
            {
                if(i != j && check == true)
                {
                    if(a[i] - t + a[j] - t == a[6])
                    {
                        cout << a[i] - t << ' ' << a[j] - t << ' ' << t << '\n';
                        check = false;
                    }
                }
            }
        }
    }
    return 0;
}
