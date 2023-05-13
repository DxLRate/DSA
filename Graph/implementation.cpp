#include<iostream>
#include<queue>
#include<vector>
#include<map>
using namespace std; 
#define vi vector<int>
#define vii vector<vector<int,int>>

class Graph{
    public:
    int v = 0;
    map<int, bool> visited;
    map<int, vector<int> > adj;
    Graph(int v);
    void addEdge(int x, int y);
    void BFS(int s);
    void DFS(int s);
};
Graph::Graph(int v){
    this->v = v;
}
void Graph::addEdge(int x, int y){
    adj[x].push_back(y);
}
void Graph::BFS(int s){
    vector<bool> visited1(v,0);
    visited1[s] = 1;
    
    queue<int> q;
    q.push(s);

    while(!q.empty()){
        int temp = q.front();
        cout<<temp<<" ";
        q.pop();
        for(auto i : adj[temp]){
            if(!visited1[i]){
            visited1[i] = 1;
            q.push(i);
            }
            
        }
    }
}
void Graph::DFS(int s){
   
    visited[s] = 1;
    cout<<s<<" ";
    for(auto i : adj[s]){
        if(!visited[i])
        DFS(i);
    }
}

int main(){
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
 
    // cout << "Following is Depth First Traversal"
    //         " (starting from vertex 2) \n";
    // g.DFS(2);
    cout << "\nFollowing is bredth First Traversal"
            " (starting from vertex 2) \n";
    g.BFS(2);
    
    
    return 0;
}