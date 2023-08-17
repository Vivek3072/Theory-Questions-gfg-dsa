#include<bits/stdc++.h> 
using namespace std; 

void DFSRec(vector<int> adj[], int i, bool visited){

}

void DFS(vector<int> adj[]){
    bool visited[7];
    for(int i=0;i<7;i++)
        visited[i]=false;
    
    for(int i=0;i<7;i++){
        if(visited[i]==false)
            DFSRec(adj,i,visited);
    }
}

int main(){
    int V=7;
    vector<int> adj[V];
    DFS(adj);
    return 0;
}