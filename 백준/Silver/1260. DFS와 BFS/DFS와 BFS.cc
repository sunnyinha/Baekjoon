#include <iostream>
#include <vector>
#include<queue>
#include<algorithm>
using namespace std;

bool visited[1001];
vector<int> graph[10001];
queue<int>q;

void dfs(int v)
{
    visited[v] = true;
    cout << v << " ";
    for (int i :graph[v])
    {
        if (!visited[i]) 
            dfs(i); 
    }
}
void bfs(int v)
{
    q.push(v);
    visited[v] = true;

    while (!q.empty())
    {
        int front = q.front();
        cout << front << ' ';
        q.pop();
        for (int i : graph[front])
        {
            if (!visited[i])
            {
                q.push(i);
                visited[i] = true;
            }
        }
       
    }

    

}

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m, v;
    cin >> n >> m >> v;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
        sort(graph[x].begin(), graph[x].end());
        sort(graph[y].begin(), graph[y].end());

    }
    dfs(v);
    cout << '\n';
    for (int i = 0; i < 1001; i++)
    {
        visited[i] = 0;
    }
    bfs(v);
}