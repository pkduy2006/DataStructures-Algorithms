#include <bits/stdc++.h>
using namespace std;
map <string, int> st;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for(int i=1; i<=n; i++)
    {

        string s;
        cin >> s;
        auto it=st.count(s);
        if(it>0)
        {
            cout << s << st[s] << '\n';
            st[s]++;
        }
        else
        {
            cout << "OK" << '\n';
            st.insert(make_pair(s, 1));
        }
    }
    return 0;
}
