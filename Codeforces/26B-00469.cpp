#include <bits/stdc++.h>
using namespace std;

int ntests;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> ntests;
    while(ntests--) {
        int k;
        cin >> k;

        if(k % 3 == 0 || k % 3 == 2)
            cout << "NO\n";
        else
            cout << "YES\n";
    }

    return 0;
}
