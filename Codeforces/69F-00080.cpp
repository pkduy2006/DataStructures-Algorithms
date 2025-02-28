#include <bits/stdc++.h>
#define int long long
using namespace std;

bool check(string s)
{
    for(int i = 0; i < s.size() / 2; i++)
    {
        if(s[i] != s[s.size() - i - 1])
            return false;
    }
    return true;
}

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
        cin >> n >> k;
        string s;
        cin >> s;
        if(check(s) || k == 0)
            cout << 1 << '\n';
        else
            cout << 2 << '\n';
    }
    return 0;
}
