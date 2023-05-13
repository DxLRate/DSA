//    Largest Rectangle code

// #include<bits/stdc++.h>
// using namespace std;

// int largestRect(int a[], int n){
//     stack<int> st;
//     int i=0;
//     int ans=INT_MIN;
//     while(i<n){
//         while(!st.empty() && a[i]<=a[st.top()]){
//             int t = st.top();
//             int h = a[t];
//             st.pop();
//             if(st.empty()){
//                 ans = max(ans, h*i);
//             }else{
//                 ans = max(ans, h*(i-st.top()-1));
//             }
//         }
//         st.push(i);
//         i++;
//     }

//     return ans;

// }

// int main(){
//     int a[]={2,4,6,5,7,8,4};             // rectangle heights each og width 1
//     int n = sizeof(a)/sizeof(a[0]);

//     cout<<largestRect(a, n)<<endl;


//     return 0;
// }

