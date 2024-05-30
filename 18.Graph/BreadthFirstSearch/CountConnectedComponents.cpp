#include<bits/stdc++.h> 
using namespace std; 

//  NO SOURCE IS GIVEN HERE AND GRAPH MAY BE DISCONNECTED ALSO 
// TIME COMPLEXITY OVERALL IS O(V+E)
void BFS(vector<int> adj[], int s, bool visited[]) {
 	queue<int>  q;
	
	visited[s] = true; 
	q.push(s); 

	while(q.empty()==false) { 
		int u = q.front(); 
		q.pop();
		cout << u << " "; 
		 
		for(int v:adj[u]){
		    if(visited[v]==false){
		        visited[v]=true;
		        q.push(v);
		    }
		} 
	} 
}

int BFSDin(vector<int> adj[], int V){
    bool visited[V+1] = {false}; //to keep track of all the vertex that has been added to the queue
	// for(int i = 0;i<V; i++) 
	// 	visited[i] = false;
	int connectedComponents = 0;
    for(int i=0;i<V;i++){
        if(visited[i]==false){
            BFS(adj,i,visited);
            connectedComponents++;
        }
    }
    return connectedComponents;
}

void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main() {
	int V=7;
	vector<int> adj[V];
	addEdge(adj,0,1); 
	addEdge(adj,0,2); 
	addEdge(adj,2,3); 
	addEdge(adj,1,3); 
	addEdge(adj,4,5);
	addEdge(adj,4,6);
	addEdge(adj,5,6);
	// 0,1,2,3 are one component are 4,5,6 are another component in the graph

	cout << "Following is Breadth First Traversal: "<< endl; 
	int ans = BFSDin(adj,V); 
    cout<<"\n";
    cout<<"The no. of connected components in the graph is :"<<ans<<endl;
	return 0; 
} 
