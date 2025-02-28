#include <bits/stdc++.h>
#define int long long
using namespace std;
const int MOD = 998244353;
int whale(int a, int b)
{
    if(b == 0)
        return 1;
    int x = whale(a, b / 2);
    if(b % 2 == 0)
        return x * x % MOD;
    else
        return x * x * a % MOD;
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int w, h;
    cin >> w >> h;
    cout << whale(2, w + h);
    return 0;
}
