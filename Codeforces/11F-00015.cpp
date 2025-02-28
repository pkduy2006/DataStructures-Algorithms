#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = 1e5 + 7, INF = 1e13 + 7;
vector<pair<int, int>> adj[N];
int p[N], n, m, d[N];
vector<int> res;

void dijkstra(int s)
{
    fill(d, d + N, INF);
    d[s] = 0;
    set<pair<int, int>> q;
    q.insert({0, s});

    while(!q.empty())
    {
        int v = q.begin()->second;
        q.erase(q.begin());

        for(auto edge : adj[v])
        {
            int to = edge.first, w = edge.second;

            if(d[v] + w < d[to])
            {
                q.erase({d[to], to});
                d[to] = d[v] + w;
                p[to] = v;
                q.insert({d[to], to});
            }
        }
    }
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    for(int i = 1; i <= m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    dijkstra(1);

    if(d[n] == INF)
    {
        cout << -1;
        return 0;
    }
    else
    {
        int root = n;
        while(root != 1)
        {
            res.push_back(root);
            root = p[root];
        }
        res.push_back(1);

        for(int i = res.size() - 1; i >= 0; i--)
            cout << res[i] << ' ';
    }

    return 0;
}
