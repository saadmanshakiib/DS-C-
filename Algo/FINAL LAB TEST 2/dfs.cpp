#include <iostream>
using namespace std;

const int MAX = 100;
int adj[MAX][MAX];
bool visited[MAX];
int n;

void dfs(int u) {
    visited[u] = true;
    cout << u << " ";

    for (int v = 0; v < n; v++) {
        if (adj[u][v] && !visited[v]) {
            dfs(v);
        }
    }
}

int main() {
    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter adjacency matrix:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> adj[i][j];

    int start;
    cout << "Enter starting node: ";
    cin >> start;

    for (int i = 0; i < n; i++) visited[i] = false;

    cout << "DFS Traversal: ";
    dfs(start);
    return 0;
}
