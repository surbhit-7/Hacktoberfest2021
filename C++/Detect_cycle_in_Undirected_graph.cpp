//Code :-
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  //public:
    // Function to detect cycle in an undirected graph.
       public:
    //Function to detect cycle in an undirected graph.
    bool cycle(vector<int> adj[],int s , bool visited[],int parent){
        visited[s] = true;
        for(int x : adj[s]){
            if(visited[x]==false){
                if(cycle(adj,x,visited,s)==true)
                    return true;
            }
            else if(x!=parent)
                return true;
            
            
        }
        return false;
    }
    
	bool isCycle(int v, vector<int>adj[])
	{
	    bool visited[v];
	    for(int i = 0 ; i < v ; i++)
	        visited[i] = false;
	   
	   for(int i = 0 ; i < v ; i++){
	       if(visited[i] == false)
	            if(cycle(adj,i,visited,-1) == true)
	                return true;
	   }
	   return false;
	}
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
