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
        int n, cnt = 0;
        cin >> n;
        vector<int> a;
        for(int i = n; i >= 1; i--)
            a.push_back(i);
        while(prev_permutation(a.begin(), a.end()) && cnt < n)
        {
            bool check = true;
            for(int i = 2; i < a.size(); i++)
        {
                if(a[i - 2] + a[i - 1] == a[i])
                    check = false;
            }
            if(check == false)
                continue;
            cnt++;
            for(int i = 0; i < a.size(); i++)
                cout << a[i] << ' ';
            cout << '\n';
        }
    }

    return 0;
}
