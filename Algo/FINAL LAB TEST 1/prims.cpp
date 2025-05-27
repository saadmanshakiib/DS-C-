#include <iostream>
#define INF 1000000
using namespace std;

const int MAX = 100;
int cost[MAX][MAX];
bool visited[MAX];
int key[MAX];
int parent[MAX];
int n;

int findMinKey() {
    int min = INF, index = -1;
    for (int i = 0; i < n; i++) {
        if (!visited[i] && key[i] < min) {
            min = key[i];
            index = i;
        }
    }
    return index;
}

void prim() {
    for (int i = 0; i < n; i++) {
        key[i] = INF;
        visited[i] = false;
        parent[i] = -1;
    }

    key[0] = 0;

    for (int count = 0; count < n - 1; count++) {
        int u = findMinKey();
        visited[u] = true;

        for (int v = 0; v < n; v++) {
            if (cost[u][v] && !visited[v] && cost[u][v] < key[v]) {
                parent[v] = u;
                key[v] = cost[u][v];
            }
        }
    }

    int totalWeight = 0;
    cout << "Edges in MST:\n";
    for (int i = 1; i < n; i++) {
        cout << parent[i] << " - " << i << " = " << cost[i][parent[i]] << "\n";
        totalWeight += cost[i][parent[i]];
    }

    cout << "Total weight of MST: " << totalWeight << endl;
}

int main() {
    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter adjacency matrix (0 for no edge):\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> cost[i][j];

    prim();
    return 0;
}
