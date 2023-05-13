#include<bits/stdc++.h>
using namespace std;

//  ------------------------------------------Krukal's Algorithm-------------------------
void make_set(int node, vector<int> &parent){
    parent[node] = node;
}
//  Find operation in DSU
int find_set(int val, vector<int> &parent){
    if(parent[val] == val){
        return val;
    }
    return parent[val] = find_set(parent[val], parent);     //  path reduction optimisation 
}
//  union operation in DSU
void union_sets(int set1, int set2, vector<int> &parent, vector<int> &size){
    int a = find_set(set1, parent);
    int b = find_set(set2, parent);
    if(size[a] < size[b]){    // rank/size optimisation  
        swap(a, b);
    }
    parent[b] = a;
    size[a] += size[b];
}

int main(){
    int n, m; cin>>n>>m;
    vector<vector<int>> edge;
    vector<int> parent(n);
    vector<<int> size(n,0);
    for(int i=0; i<m; i++){
        int x,y; 
        cin>>x>>y;
        edge.push_back({w, u, v});
    }
    for(int i=0; i<n; i++){
        make_set(i,parent);
    }
    sort(edge.begin(), edge.end());
    for(auto i: edge){
        int w = i[0];
        int u = i[1];
        int v = i[2];
        int x = find_set(i[1]);
        int y = find_set(i[2]);
        if(x == y){
            continue;
        }
        cout<<i[1]<<" "<<i[2];
        union_sets(u, v);
        cost += w;
    }
    return 0;
}

//-----------------------------------Prims Algorithm -------------------------
// int main(){
//     int n,m; cin>>n>>m;
//     vector<vector<int>> adj[n];
//     vector<int> dist(n);
//     vector<bool> visited(n);
//     vector<int> parent(n);
//     int cost = 0;
//     for(int i=0; i<m; i++){
//         int u,v,w; cin>>u>>v>>w;
//         adj[u].push_back({v, w});
//         adj[v].push_back({u, w});
//     }
//     for(int i=0; i<n; i++){
//         dist[i] = INT_MAX;
//     }
//     // main Algorithm
//     dist[0] = 0;
//     set<vector<int>> s;
//     s.insert({0, 0});
//     while(!s.empty()){
//         auto x = *s.begin();
//         s.erase({dist[x[1]], x[0]});
//         visited[x[1]] = true;
//         int u = x[1];
//         int w = x[0];
//         int v = parent[x[1]];
//         cost += w;
//         cout<<u<<" "<<v<<" "<<w<<endl;
//         for(auto it : adj[x[1]]){
//             if(visited[it[0]]){
//                 continue;
//             }
//             if(dist[it[0]] > it[1]){
//                 s.erase({dist[it[0]], it[1]});  // prev path deleted
//                 dist[it[0]] = it[1];         //  min val updated
//                 s.insert({dist[it[0]], it[1]});  //  new path inserted
//                 parent[it[0]] = x[1];  
//             }
//         }
//     }
//
//     cout<<cost<<endl;
// }    

