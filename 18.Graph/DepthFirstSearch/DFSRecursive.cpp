#include <bits/stdc++.h>
using namespace std;

void DFSRec(const vector<vector<int>> &adj, int u, vector<bool> &visited) {
    visited[u] = true;
    cout << u << " ";

    // Recur for all the vertices adjacent to this vertex
    for (int v : adj[u]) {
        if (!visited[v]) {
            DFSRec(adj, v, visited);
        }
    }
}

// Prints DFS only for connected components
void DFSconnected(const vector<vector<int>> &adj) {
    int v = adj.size();
    vector<bool> visited(v, false);

    // here 0 is the source vertex
    DFSRec(adj, 0, visited);
}

void DFSdisconnected(const vector<vector<int>> &adj) {
    int v = adj.size();
    vector<bool> visited(v, false);

    for (int i = 0; i < v; ++i) {
        if (!visited[i]) {
            // here i is the source vertex for every function call
            DFSRec(adj, i, visited);
        }
    }
}

void addEdge(vector<vector<int>> &adj, int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main() {
    int V = 8; 
    vector<vector<int>> adj(V);

    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 0, 5);
    addEdge(adj, 1, 3);
    addEdge(adj, 2, 4);
    addEdge(adj, 3, 5);
    addEdge(adj, 4, 5);
    addEdge(adj, 6, 7);

    // THE BASIC TRAVERSAL TO HANDLE ONLY THE CONNECTED COMPONENTS TO THE SOURCE VERTEX AS PASSED IN THE DFSRec FUNCION
    cout<<"The simple DFS Traversal for connected components only:"<<endl;
    DFSconnected(adj); // Prints the DFS Traersal only for the conencted component
    cout<<"\nThe DFS Traversal which handles and prints the disconnected components too:"<<endl;
    DFSdisconnected(adj);
    return 0;
}
