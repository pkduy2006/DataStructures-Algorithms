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
        int si;
        string s;
        int res = 0;
        cin >> si >> s;
        for(int i = 0; i < s.size() - 1; i++)
        {
            if(s[i] == '0')
            {
                if(s[i + 1] == '1')
                {
                    if(s[i + 2] == '0')
                        res++;
                }
                else
                {
                    if(s[i + 1] == '0')
                        res+=2;
                }
            }
        }
        cout << res << '\n';
    }

    return 0;
}
