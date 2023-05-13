#include <bits/stdc++.h>
using namespace std;

// // ----------------------------------------- Cycle Detection using DSU ------------------------------------
// void make_set(int node, vector<int> &parent){
//     parent[node] = node;
// }
// //  Find operation in DSU
// int find_set(int val, vector<int> &parent){
//     if(parent[val] == val){
//         return val;
//     }
//     return parent[val] = find_set(parent[val], parent);     //  path reduction optimisation 
// }
// //  union operation in DSU
// void union_sets(int set1, int set2, vector<int> &parent, vector<int> &size){
//     int a = find_set(set1, parent);
//     int b = find_set(set2, parent);
//     if(size[a] < size[b]){    // rank/size optimisation  
//         swap(a, b);
//     }
//     parent[b] = a;
//     size[a] += size[b];
// }
//
// int main(){
//     int v,u;
//     cin>>v>>u;
//     vector<vector<int>> edge;
//     vector<int> parent(v);
//     vector<int> size(v,1);
//     bool cycle = false;
//     for(int i=0; i<v; i++){
//         make_set(i, parent);
//     }
//     // Cycle detection in graph using DSU
//     for(int i=0; i<u; i++){
//         int x,y; cin>>x>>y;
//         edge.push_back({x,y});
//     }
//     for(auto i: edge){
//         int x = find_set(i[0], parent);
//         int y = find_set(i[1], parent);
//         if(x == y)
//         {cycle = true; break;}
//         union_sets(x,y,parent,size);
//     }
//     if(cycle)
//     cout<<"Cycle is present"<<endl;
//     else
//     cout<<"Cycle is not prsent"<<endl;
// }

