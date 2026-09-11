#include <bits/stdc++.h>
using namespace std;

class Edge
{
public:
    int a, b;
    long long int c;
    Edge(int a, int b, long long int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};

const long long int INF = 1e18;
long long int dis[1005];
vector<Edge> edge_list;
int n, e;

void bellman_ford(int s)
{
    for (int i = 1; i <= n; i++)
        dis[i] = INF;

    dis[s] = 0;

    for (int i = 1; i <= n - 1; i++)
    {
        for (auto ed : edge_list)
        {
            int a = ed.a;
            int b = ed.b;
            long long int c = ed.c;

            if (dis[a] != INF && dis[a] + c < dis[b])
                dis[b] = dis[a] + c;
        }
    }

    bool cycle = false;    
    for (auto ed : edge_list)
    {
        int a = ed.a;
        int b = ed.b;
        long long int c = ed.c;

        if (dis[a] != INF && dis[a] + c < dis[b])
        {
            cycle = true;
            break;
        }
    }

    if (cycle)
    {
        cout << "Negative Cycle Detected\n";
    }
    else
    {
        int t;
        cin >> t;
        while (t--)
        {
            int d;
            cin >> d;

            if (dis[d] == INF)
                cout << "Not Possible\n";
            else
                cout << dis[d] << "\n";
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> e;

    while (e--)
    {
        int a, b;
        long long int c;
        cin >> a >> b >> c;
        edge_list.push_back(Edge(a, b, c));
    }

    int s;
    cin >> s;

    bellman_ford(s);

    return 0;
}