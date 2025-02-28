#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = 1007;
string dp[N];

main()
{
    int ntest;
    cin >> ntest;
    dp[1] = "1";
    dp[2] = "2";
    for(int i = 3; i <= 1000; i++)
    {
        if(i % 3 == 0)
            dp[i] = dp[i - 1] + dp[1];
        else if(i % 3 == 1)
            dp[i] = dp[1] + dp[i - 1];
        else
            dp[i] = dp[i - 2] + dp[2];
    }
    while(ntest--)
    {
        int n;
        cin >> n;
        cout << dp[n] << '\n';
    }

    return 0;
}
