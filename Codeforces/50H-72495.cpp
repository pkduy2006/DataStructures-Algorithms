#include <bits/stdc++.h>
#define int long long
using namespace std;

string s;

const int N = 1e6 + 25;
int L, R;

struct Node // Khai báo và khởi tạo struct Node
{
    int optimal, open, close;
} st[4 * N];

Node operator + (const Node& me, const Node& her)
{
    Node res;

    int tmp = min(me.open, her.close); // số ngoặc đúng mà kiếm từ ngoặc đơn của 2 đoạn
    res.optimal = me.optimal + her.optimal + tmp; // tổng số ngoặc đúng từ 2 đoạn

    res.close = me.close + her.close - tmp;
    res.open = me.open + her.open - tmp;

    return res;
}

void Build(int id, int l, int r) // xây dựng st[id] của segment tree
{
    if(l > r)
        return;

    if(r - l == 1 && s[l] == '(' && s[r] == ')')
    {
        st[id].optimal = 1;
        st[id].open = 0;
        st[id].close = 0;
        return;
    }

    if(r == l)
    {
        if(s[l] == '(')
        {
            st[id].optimal = 0;
            st[id].open = 1;
            st[id].close = 0;
            return;
        }
        else
        {
            st[id].optimal = 0;
            st[id].open = 0;
            st[id].close = 1;
            return;
        }
    }

    int mid = (l + r) / 2;

    Build(id * 2, l, mid);
    Build(id * 2 + 1, mid + 1, r);

    st[id] = st[id * 2] + st[id * 2 + 1];
}

Node get(int id, int l, int r, int u, int v)
{
    if(v < l || u > r)
        return {0, 0, 0};

    if(u <= l && r <= v)
        return st[id];

    int mid = (l + r) / 2;

    return get(id * 2, l, mid, u, v) + get(id * 2 + 1, mid + 1, r, u, v);
}

void ReadAndBuild()
{
    cin >> s;
    s = ' ' + s;

    Build(1, 1, s.size() - 1);
}

void Solve()
{
    int q;
    cin >> q;
    while(q--)
    {
        int l, r;
        cin >> l >> r;

        Node ans = get(1, 1, s.size() - 1, l, r);
        cout << ans.optimal * 2 << '\n';
    }
}

main()
{
    //freopen("B.inp","r",stdin);
    //freopen("B.out","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ReadAndBuild();

    Solve();

    return 0;
}
