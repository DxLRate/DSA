#include <bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
const int INF = 1e9;
#define V 4

// // -----------------------------------------Dijistra Algorithm --------------------
// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     vector<vector<pair<int,int>>> adj(n+1);
//     vector<int> dist(n + 1, INF);
//     for (int i = 0; i < n; i++)
//     {
//         int u, v, w;
//         cin >> u >> v >> w;
//         adj[u].push_back({v, w});
//         adj[v].push_back({u, w});
//     }
//     set<pair<int,int>> s; //(wt, vertex);
//     int source;
//     cin >> source;
//     dist[source] = 0;
//     s.insert({0, source});
//     while (!s.empty())
//     {
//         auto x = *(s.begin());
//         s.erase(x);
//         int u = x.ss;
//         int w = x.ff;
//         for (auto it : adj[x.ss])
//         {
//             if (dist[it.ff] > dist[x.ss] + it.ss)
//             {
//                 s.erase({dist[it.ff], it.ff});
//                 dist[it.ff] = dist[x.ss] + it.ss;
//                 s.insert({dist[it.ff], it.ff});
//             }
//         }
//     }
//     for (int j=1; j<=n; j++)
//     {
//         if (dist[j] < INF)
//             cout << dist[j] << " ";
//         else
//             cout << "-1" << " ";
//
//         
//     }
//     cout << endl;
//     return 0;
// }

// // --------------------------------------Bellman Ford's Algorithm (pass and relax)-------------------
// int main(){
//     int n,m; cin>>n>>m;
//     vector<vector<int>> edge;
//     for(int i=0; i<m; i++){
//         int u,v,w; cin>>u>>v>>w;
//         edge.push_back({u,v,w});
//     }
//     vector<int> dist(n, INF);
//     int src; cin>>src;
//     dist[src] = 0;
//     bool NWC = false;
//     for(int i=0; i<n-1; i++){   // n-1 passes
//         for(auto it : edge){
//             int u = it[0];
//             int v = it[1];
//             int w = it[2];
//             dist[v] = min(dist[v], dist[u]+w);   // relax
//         }
//     }
//     for(auto it : edge){
//         int u = it[0];
//         int v = it[1];
//         int w = it[2];
//         if(dist[v] > dist[u] + w){
//             NWC = true;
//         }
//      
//     }
//
//     for(auto i : dist){
//         if(i< INF){
//             cout<<i<<" ";
//         }else{
//             cout<<"-1 ";
//         }
//     }
//     cout<<endl<<NWC<<endl;
//     return 0;
//
// }

// // -------------------------------------Floyd Warshall Algorithm --------------------
// void printSolution(int dist[][V])
// {
//     cout << "The following matrix shows the shortest "
//             "distances"
//             " between every pair of vertices \n";
//     for (int i = 0; i < V; i++) {
//         for (int j = 0; j < V; j++) {
//             if (dist[i][j] == INF)
//                 cout << "INF"
//                      << "     ";
//             else
//                 cout << dist[i][j] << "     ";
//         }
//         cout << endl;
//     }
// }
// void floydWarshall(int dist[][V])
// {
//     int i,j,k;
// for (k = 0; k < V; k++) {
//         // Pick all vertices as source one by one
//         for (i = 0; i < V; i++) {
//             // Pick all vertices as destination for the
//             // above picked source
//             for (j = 0; j < V; j++) {
//                 // If vertex k is on the shortest path from
//                 // i to j, then update the value of
//                 // dist[i][j]
//                 if (dist[i][j] > (dist[i][k] + dist[k][j])
//                     && (dist[k][j] != INF
//                         && dist[i][k] != INF))
//                     dist[i][j] = dist[i][k] + dist[k][j];
//             }
//         }
//     }
// 
//     // Print the shortest distance matrix
//     printSolution(dist);
// }
//
// int main()
// {
//     /* Let us create the following weighted graph
//             10
//     (0)------->(3)
//         |     /|\
//     5 |     |
//         |     | 1
//     \|/     |
//     (1)------->(2)
//             3     */
//     int graph[V][V] = { { 0, 5, INF, 10 },
//                         { INF, 0, 3, INF },
//                         { INF, INF, 0, 1 },
//                         { INF, INF, INF, 0 } };
// 
//     // Print the solution
//     floydWarshall(graph);
//     return 0;
// }

