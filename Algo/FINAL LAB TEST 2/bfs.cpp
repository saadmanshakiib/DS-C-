#include <iostream>
using namespace std;

const int MAX = 100;
int adj[MAX][MAX];
bool visited[MAX];
int q[MAX]; // Renamed from 'queue'
int front = 0, rear = 0;
int n;

void enqueue(int x) {
    if (rear < MAX) {
        q[rear++] = x;
    }
}

int dequeue() {
    if (front < rear) {
        return q[front++];
    }
    return -1; // error value
}

bool isEmpty() {
    return front == rear;
}

void bfs(int start) {
    for (int i = 0; i < n; i++) visited[i] = false;

    front = rear = 0; // Reset queue
    enqueue(start);
    visited[start] = true;

    while (!isEmpty()) {
        int u = dequeue();
        if (u == -1) break;

        cout << u << " ";

        for (int v = 0; v < n; v++) {
            if (adj[u][v] && !visited[v]) {
                enqueue(v);
                visited[v] = true;
            }
        }
    }
}

int main() {
    cout << "Enter number of nodes (max " << MAX << "): ";
    cin >> n;

    if (n <= 0 || n > MAX) {
        cout << "Invalid number of nodes.\n";
        return 1;
    }

    cout << "Enter adjacency matrix (" << n << " x " << n << "):\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> adj[i][j];

    int start;
    cout << "Enter starting node (0 to " << n - 1 << "): ";
    cin >> start;

    if (start < 0 || start >= n) {
        cout << "Invalid starting node.\n";
        return 1;
    }

    cout << "BFS Traversal: ";
    bfs(start);
    cout << endl;
    return 0;
}
