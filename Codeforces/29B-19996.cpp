#include <bits/stdc++.h>
#define int long long
using namespace std;

int a[27][27], cnt = 0;

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    for(int i = 0; i < 26; i++)
    {
        for(int j = 0; j < 26; j++)
        {
            if(i == j)
                continue;

            a[i][j] = ++cnt;
        }
    }

    int ntests;
    cin >> ntests;
    while(ntests--)
    {
        string s;
        cin >> s;

        cout << a[s[0] - 'a'][s[1] - 'a'] << '\n';
    }

    return 0;
}
