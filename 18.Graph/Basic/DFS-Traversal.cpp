#include<bits/stdc++.h> 
using namespace std; 

void addEdge(int adj[][5], int u, int v) { 
    adj[u][v] = 1; 
    adj[v][u] = 1; 
} 

void printGraphComponent(int adj[][5], int sv, bool visited[], int V){
    cout<<sv<<" ";
    visited[sv] = true;
    for(int i = 0 ; i < V ; i++){
        if(adj[sv][i] == 1 && visited[i] == false)
            printGraphComponent(adj, i, visited, V);
    }
    cout<<" -- ";
}

void printGraph(int adj[][5], int V, int sv) { 
    bool visited[V];
    for (int i = 0; i < V; i++)
        visited[i] = false; 
    
    for (int i = 0; i < V; i++) { 
        if(visited[i] == false)
            printGraphComponent(adj, i, visited, V);
    } 
    cout<<"\n"; 
} 

int main() { 
    int V = 5; 
    int adj[5][5] = {0}; 
    addEdge(adj, 0, 1); 
    addEdge(adj, 1, 2); 
    addEdge(adj, 3, 4); 
    
    printGraph(adj, V, 0); 
    return 0; 
}