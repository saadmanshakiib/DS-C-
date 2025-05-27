#include <iostream>
using namespace std;

const int MAX = 100;

struct Edge {
    int u, v, weight;
};

Edge edges[MAX];
int parent[MAX];
int n, m; 

void sortEdges() {
    for (int i = 0; i < m - 1; i++) {
        for (int j = 0; j < m - i - 1; j++) {
            if (edges[j].weight > edges[j + 1].weight) {
                Edge temp = edges[j];
                edges[j] = edges[j + 1];
                edges[j + 1] = temp;
            }
        }
    }
}

int findParent(int node) {
    if (parent[node] == node) return node;
    return parent[node] = findParent(parent[node]);
}

void kruskal() {
    for (int i = 0; i < n; i++) parent[i] = i;

    sortEdges();

    int totalWeight = 0;
    cout << "Edges in MST:\n";

    for (int i = 0; i < m; i++) {
        int u = edges[i].u;
        int v = edges[i].v;
        int pu = findParent(u);
        int pv = findParent(v);

        if (pu != pv) {
            cout << u << " - " << v << " = " << edges[i].weight << "\n";
            totalWeight += edges[i].weight;
            parent[pu] = pv; // union
        }
    }

    cout << "Total weight of MST: " << totalWeight << endl;
}

int main() {
    cout << "Enter number of nodes and edges: ";
    cin >> n >> m;

    cout << "Enter each edge (u v weight):\n";
    for (int i = 0; i < m; i++) {
        cin >> edges[i].u >> edges[i].v >> edges[i].weight;
    }

    kruskal();
    return 0;
}
