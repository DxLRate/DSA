#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+2;
// int arr[N], tree[4*N];

// class ST{


// int querySum(int node, int st, int en, int l, int r){
//     if(l>en || r < st){
//         return 0;
//     }
//     if(st >= l && en <= r){
//         return tree[node];
//     }
//     int mid = (st+en)/2;
//     int q1 = querySum(2*node+1, st, mid, l, r);
//     int q2 = querySum(2*node+2, mid+1, en, l, r);

//     return q1+q2;
// }

// void queryUpdate(int node, int st, int en, int idx, int val){
//     if(st == en){
//         tree[node] = val;
//         return;
//     }
//     int mid = (st+en)/2;
    
//     if(idx <= mid){
//         queryUpdate(2*node+1,st,mid,idx,val);
//     }else{
//         queryUpdate(2*node+2,mid+1,en,idx,val);
//     }
//     tree[node] = tree[2*node+1] + tree[2*node+2];
// }
// void build(int node, int st, int en){
//     if(st == en){
//         tree[node] = arr[st];
//         return;
//     }
//     int mid = (st + en)/2;
//     buildST(2*node+1,st,mid);
//     buildST(2*node+2,mid+1,en);
//     tree[node] = tree[2*node+1] + tree[2*node+2];

// }
// };

void buildST(int idx, int st, int en, int orr, vector<int> &arr, vector<int> &seg){
    if(st == en){
        seg[idx] = arr[st];
        return;
    }
    int mid = (st+en)/2;
    buildST(2*idx+1, st, mid, !orr, arr, seg);
    buildST(2*idx+2, mid+1, en, !orr, arr, seg);
    if(orr)seg[idx] = seg[2*idx+1] | seg[2*idx+2];
    else seg[idx] = seg[2*idx+1] ^ seg[2*idx+2];
}
void queryUpdate(int idx, int st, int en, int p, int q, int orr, vector<int> &seg)
{
    if(st == en) {seg[idx] = q; return;}
    int mid = (st+en)/2;
    if(p<=mid){
        queryUpdate(2*idx+1, st, mid, p, q, !orr, seg);
    }else{
        queryUpdate(2*idx+2, mid+1, en, p ,q, !orr, seg);
    }
    if(orr)
    seg[idx] = seg[2*idx+1] | seg[2*idx+2];
    else
    seg[idx] = seg[2*idx+1] ^ seg[2*idx+2]; 
}

int main(){
    int n,m; cin>>n>>m;
    int el = pow(2,n);
    vector<int> arr(el);
    vector<int> seg(4*el);
    for(int i=0; i<el; i++){
        cin>>arr[i];
    }
    if(n%2)
    buildST(0, 0, el-1, 1, arr, seg);
    else 
    buildST(0, 0, el-1, 0, arr, seg);
    while(m--){
        int p,q; cin>>p>>q;
        p--;
        if(n%2)
        queryUpdate(0,0,el-1,p,q,1,seg);
        else
        queryUpdate(0,0,el-1,p,q,0,seg);
        cout<<seg[0]<<endl;;
    }
}