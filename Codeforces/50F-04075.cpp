#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<string> res;

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int ntest;
    cin >> ntest;
    while(ntest--)
    {
        int n;
        string s, ans = "";
        cin >> n >> s;
        res.clear();
        for(int i = n - 1; i >= 0; i--)
        {
            if(s[i] == 'W' && ans.size() >= 1)
            {
                res.push_back(ans);
                //cout << ans << ' ';
                ans = "";
            }
            else
                ans+=s[i];
        }
        if(ans.size() >= 1)
            res.push_back(ans);

        //for(int i = 0; i < res.size(); i++)
            //cout << res[i] << ' ';
        //cout << '\n';
        bool review = true;
        for(int i = 0; i < res.size(); i++)
        {
            bool checkR = false, checkB = false;
            for(int j = 0; j < res[i].size(); j++)
            {
                if(res[i][j] == 'R')
                    checkR = true;
                else if(res[i][j] == 'B')
                    checkB = true;
            }

            if(checkB == false && checkR == false)
                continue;
            if(checkB == false || checkR == false)
                review = false;
        }

        if(review == true)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
