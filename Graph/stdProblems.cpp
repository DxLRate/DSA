#include<bits/stdc++.h>
using namespace std;

// //-----------------------------Count all possible paths between two vertices-------------------
// int Graph::count_paths(int src, int dst, int vertices)
// {
//     int path_count = 0;
//     vector<bool> visited(vertices, false);
//     path_counter(src, dst, path_count, visited);
//     return path_count;
// }
// void Graph::path_counter(int src, int dst, int& path_count,
//                          vector<bool>& visited)
// {
//     visited[src] = true;
//     if (src == dst) {
//         path_count++;
//     }
//     else {
//         for (auto neighbour : m_neighbours[src]) {
//             if (!visited[neighbour])
//                 path_counter(neighbour, dst, path_count,
//                              visited);
//         }
//     }
//   visited[src] = false;
// }

// // ---------------------------- Cycle detection in undirected graph_--------------------
// bool isCycle(int src, vector<vector<int>> &adj, vector<bool> &visited, int parent){
//     visited[src] = true;
//     for(auto i : adj[src]){
//         if(i != parent){
//             if(!visited[i] and isCycle()){
//                return true;
//             }else if(visited[i]){
//                return true;
//             }
//         }
//     }
//     return false;
// }
// int main(){
//     int u,v;
//     cin>>u>>v;
//     vector<vector<int>> adj(u);
//     vector<bool> visited(u,false);
//     for(int i=0; i<v; i++){
//         int x, y;
//         cin>>x>>y;
//         adj[x].push_back(y);
//         adj[y].push_back(x);
//     }
//     bool cycle = false;
//     for(int i=0; i<u; i++){
//         if(!visited[i] and isCycle(i, adj, visited, -1)){
//             cycle = true;
//         }
//     }
//     if(cycle){
//         cout<<"Cycle is present"<<endl;
//     }else{
//         cout<<"Cycle is not present"<<endl;
//     }
// }

// // --------------------------------Cycle detection in Directed Graph -------------------------------
// bool isCycle(int src, vector<vector<int>> &adj, vector<bool> &visited, vector<bool> &recStack){
//     recStack[src] = true;
//     visited[src] = true;
//     for(auto i : adj[src]){      
//          if(!visited[i] and isCycle(i, adj, visited, recStack)){
//             return true;
//          }
//          if(recStack[i]){
//              return true;
//          }   
//     }
//     recStack[src] = false;
//     return false;
// }
// int main(){
//     int u,v;
//     cin>>u>>v;
//     vector<vector<int>> adj(u);
//     vector<bool> visited(u,false);
//     vector<bool> recStack(u,false);
//     for(int i=0; i<v; i++){
//         int x, y;
//         cin>>x>>y;
//         adj[x].push_back(y);
//     }
//     bool cycle = false;
//     for(int i=0; i<u; i++){
//         if(!visited[i] and isCycle(i, adj, visited, recStack)){
//             cycle = true;
//         }
//     }
//     if(cycle){
//         cout<<"Cycle is present"<<endl;
//     }else{
//         cout<<"Cycle is not present"<<endl;
//     }
// }

// // ---------------------------------Topological Sort in DAG-------------------------------
// int main(){
//     int n,m; cin>>n>>m;
//     vector<bool> visited(n,false);
//     vector<vector<int>> adj(n);
//     vector<int> indeg(n);
//     for(int i=0; i<m; i++){
//         int x, y;
//         cin>>x>>y;
//         adj[x].push_back(y);
//         indeg[y]++;
//     }
//     queue<int> q;
//     for(int i=0; i<n; i++){
//         if(indeg[i] == 0){
//             q.push(i);
//         }
//     }
//     while(!q.empty()){
//         int temp  = q.front();
//         q.pop();
//         cout<<temp<<" ";
//         for(auto i : adj[temp]){
//             indeg[i]--;
//             if(indeg[i] == 0){
//                 q.push(i);
//             }
//         }
//     }
//     return 0;
// }

// // ---------------------------------Connected Components --------------------------
// int get_comp(int node, vector<vector<int>> adj, vector<bool> &visited){
//     int ans = 1;
//     for(auto i: adj[node]){
//         if(!visited[i]){
//             ans += get_comp(i, adj, visited);
//             visited[i] = true;
//         }
//     }
//     return ans;
// }
// int main(){
//     int u,v;
//     cin>>u>>v;
//     vector<vector<int>> adj(u);
//     vector<bool> visited(u,false);
//     vector<int> components;
//     for(int i=0; i<v; i++){
//         int x, y;
//         cin>>x>>y;
//         adj[x].push_back(y);
//     }
//     for(int i=0; i<u; i++){
//         if(!visited[i]){
//             components.push_back(get_comp(i, adj, visited));
//         }
//     }
//     for(auto j: components){
//         cout<<j<<" ";
//     }
// }

// // -------------------------------Bipartite Graph ----------------------------
// bool isbpg = true;
// vector<vector<int>> adj;
// vector<int> colored;  // 0-blue   1-Red
// void color(int node, int curr){
//     if(colored[node] != -1 and colored[node]!=curr )
//     {isbpg = false; return;}
//     if(colored[node] != -1 and colored[node] == curr)
//     return;
//     colored[node] = curr;
//     for(auto i: adj[node]){
//         color(i, curr xor 1);
//     }
// }
// int main(){
//     int u,v;
//     cin>>u>>v;
//     adj = vector<vector<int>>(u);
//     colored = vector<int>(u,-1);  // 0-blue   1-Red
//     for(int i=0; i<v; i++){
//         int x, y;
//         cin>>x>>y;
//         adj[x].push_back(y);
//         adj[y].push_back(x);
//     }
//   
//   
//     for(int i=0; i<v; i++){
//         if(colored[i] == -1){
//             color(i, 0);
//         }
//     }
//     if(isbpg){
//         cout<<"The graph is Bipartite"<<endl;
//     }else{
//         cout<<"The Graph is not Bipartite"<<endl;
//     }
// }

// ----------------------------Snake and Ladder (BFS) ------------------------
// int main()
// {
//     int l,s; cin>>l>>s;
//     map<int,int> lad;
//     map<int,int> snk;
//     while(l--){
//         int x,y; cin>>x>>y;
//         lad[x] =y;
//     }
//     while(s--){
//         int x,y; cin>>x>>y;
//         snk[x] =y;
//     }
//     vector<int> vis(101, 0);
//     queue<int> q;
//     q.push(1);
//     bool found = false;
//     int moves = 0;
//     while(!q.empty() and !found){
//         int sz = q.size();
//         while(sz-- and !found){
//             int t = q.front();
//             q.pop();
//             for(int i=0; i<6; i++){
//                 if(t+i == 100){
//                     found = true;
//                     break;
//                 }
//                 if(t+i <=100 and lad[t+i] and !vis[lad[t+i]]){
//                     q.push(lad[t+i]);
//                 }else if(t+i <=100 and snk[t+i] and !snk[lad[t+i]]){
//                     q.push(lad[t+i]);
//                 }else if(t+i<100 and !lad[t+i] and !snk[t+i] and !vis[t+i]){
//                     q.push(t+i);
//                 }
//             } 
//         }
//         moves++;
//     }
//     if(found)
//     cout<<moves<<endl;
//     else
//     cout<<"-1 "<<endl;
//     return 0;
// }
