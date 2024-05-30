#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> findShortestPath(vector<vector<int>> &adj, int source) {
    int numVertices = adj.size();
    vector<int> distance(numVertices, -1); // Initialized distances with -1 (unreachable)
    queue<int> q;

    distance[source] = 0;
    q.push(source);

    while (!q.empty()) {
        int current = q.front();
        q.pop();

        // Explore all adjacent vertices
        for (int neighbor : adj[current]) {
            if (distance[neighbor] == -1) { // If the neighbor has not been visited
                distance[neighbor] = distance[current] + 1;
                q.push(neighbor);
            }
        }
    }

    return distance;
}

void addEdge(vector<vector<int>> &adj, int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main() {
    int numVertices = 6;
    vector<vector<int>> adj(numVertices);

    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 0, 4);
    addEdge(adj, 1, 3);
    addEdge(adj, 2, 3);
    addEdge(adj, 2, 4);
    addEdge(adj, 3, 5);
    addEdge(adj, 4, 5);

    int source = 0; // 0 is the source vertex here
    vector<int> ans = findShortestPath(adj, source);

    for (int i = 0; i < ans.size(); i++) 
        cout << "The shortest path from source(" << source << ") to " << i << " is " << ans[i] << endl;

    return 0;
}
