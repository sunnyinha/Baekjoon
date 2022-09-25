#include <iostream>
#include <vector>
#include<queue>
#include<algorithm>
using namespace std;

bool visited[1001];
vector<int> graph[10001];
int c = -1;

void dfs(int v)
{
    visited[v] = true;
    c++;
    for (int i :graph[v])
    {
        if (!visited[i]) 
            dfs(i); 
    }
}


int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
        sort(graph[x].begin(), graph[x].end());
        sort(graph[y].begin(), graph[y].end());

    }
    dfs(1);
    cout << c << '\n';
    
}