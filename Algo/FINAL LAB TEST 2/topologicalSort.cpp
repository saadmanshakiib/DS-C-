#include <iostream>
using namespace std;

const int MAX = 100;
int adj[MAX][MAX];
bool visited[MAX];
int stk[MAX]; 
int top = -1;
int n;

void topoSortDFS(int u) {
    visited[u] = true;

    for (int v = 0; v < n; v++) {
        if (adj[u][v] && !visited[v]) {
            topoSortDFS(v);
        }
    }

    stk[++top] = u;
}

void topologicalSort() {
    for (int i = 0; i < n; i++) visited[i] = false;

    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            topoSortDFS(i);
        }
    }

    cout << "Topological Order: ";
    while (top >= 0) {
        cout << stk[top--] << " ";
    }
    cout << endl;
}

int main() {
    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter adjacency matrix:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> adj[i][j];

    topologicalSort();
    return 0;
}
