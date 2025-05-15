#include <iostream>
#include <algorithm>
using namespace std;

const int MAX = 100;

struct Edge {
    int u, v, w;
};

bool cmp(Edge a, Edge b) {
    return a.w < b.w;
}

int parent[MAX];

int find(int x) {
    if (parent[x] != x)
        parent[x] = find(parent[x]);
    return parent[x];
}

bool unite(int a, int b) {
    int rootA = find(a);
    int rootB = find(b);
    if (rootA == rootB) {
        return false;
    }
    parent[rootB] = rootA;
    return true;
}

int main() {
    int n, m;
    cout << "Enter number of nodes and edges: ";
    cin >> n >> m;

    Edge edges[MAX];

    cout << "Enter edges (u v weight):\n";
    for (int i = 0; i < m; i++) {
        cin >> edges[i].u >> edges[i].v >> edges[i].w;
    }

    sort(edges, edges + m, cmp);

    for (int i = 0; i < n; i++) parent[i] = i;

    int totalWeight = 0;
    cout << "Edges in MST:\n";
    for (int i = 0; i < m; i++) {
        if (unite(edges[i].u, edges[i].v)) {
            totalWeight += edges[i].w;
            cout << edges[i].u << " - " << edges[i].v << " : " << edges[i].w << "\n";
        }
    }

    cout << "Total Weight of MST: " << totalWeight << "\n";

    return 0;
}
