//       Sliding window maximum  --------------

// #include<iostream>
// #include<deque>
// #include<vector>
// using namespace std;

// vector<int> slidingWindowMaximum(int arr[], int n, int k){
//     deque<int> dq;
//     vector<int> ans;
//     for(int i=0; i<k; i++){
//         while(!dq.empty() && arr[i] >= arr[dq.back()])
//         dq.pop_back();

//         dq.push_back(i);
//     }
//     ans.push_back(arr[dq.front()]);

//     for(int i=k; i<n; i++){
//         if(dq.front() <= i-k)
//         dq.pop_front();

//         while(!dq.empty() && arr[i] >= arr[dq.back()]){
//             dq.pop_back();
//         }
//         dq.push_back(i);
//         ans.push_back(arr[dq.front()]);
//     }

//     return ans;

// }

// int main(){
//     int arr[]= {1,3,2,4,6,3,-3,7,5,9};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int k=3;
//     vector<int> ans = slidingWindowMaximum(arr, n, k);
//     for(auto &i : ans){
//         cout<<i<<" ";
//     }
//     return 0;
// }

 #include<bits/stdc++.h>
 using namespace std;                                                                   

void countSort(int arr[], int n){
    int k=INT_MIN;
    for(int i=0; i<n;i++){
        k = max(k,arr[i]);
    }

    int count[k+1]={0};
    for(int i=0; i<n; i++){
        count[arr[i]]++;
    }
    for(int i=1;i<=k;i++){
        count[i] += count[i-1];
    }

    int ans[n];
    for(int i=n-1;i>=0;i--){
        ans[--count[arr[i]]] = arr[i];
    }
    for(int i=0; i<n; i++){
        arr[i] = ans[i];
    }
}

int main(){
    int arr[] = {2,3,4,6,3,7,8,1,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int a2[]= {2,5,1,4,6,7,8,3,4,2,1};
    int n2 = 11;

    countSort(arr, n);
    countSort(a2, n2);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}