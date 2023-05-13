// next grat element
// #include<iostream>
// #include<stack>

// printNGE(int arr[], int n){
//     stack<int> st;
//     st.push(a[0]);

//     for(int i=1; i<n; i++){
//         while(!st.empty() && st.top() < arr[i]){
//             cout<< st.top()<<"-->"<<arr[i]<<endl;
//             st.pop();
//         }

//         st.push(arr[i]);
//     } 

//     while(!st.empty()){
//         cout<<st.top()<<"-->"<<" -1"<<endl;
//         st.pop();
//     }
// }

// int main(){
//     int n; cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         arr[i] = n;
//     }

//     printNGE(arr, n);


//     retrn 0;
// }


////           Prefix evaluation 

// #include<bits/stdc++.h>
// using namespace std;

// int prefixEvaluation(string s){
//     stack<int> st;
//     for(int i=s.size(); i>=0; i--){
//         if(s[i]>='0' && s[i]<='9'){
//             st.push(s[i]);
//         }else{
//             int op1 = st.top();
//             st.pop();
//             int op2 = st.top();
//             st.pop();

//             switch(s[i]){
//                 case '+':
//                 st.push(op1 + op2);
//                 case '-':
//                 st.push(op1 - op2);
//                 case '*':
//                 st.push(op1 * op2);
//                 case '/':
//                 st.push(op1 / op2);
//                 case '^':
//                 st.push(pow(op1, op2));

//             }

//         }
//     }

//     return st.top();
// }

// int main(){
//     cout<<prefixEvaluation("-+7*45+20")<<endl;

// return 0;
// }


//                Infix To Postfix

// #include<bits/stdc++.h>
// using namespace std;

// int prec(char c){
//     if(c == '^')
//     return 3;

//     if((c == '/') || (c == '*'))
//     return 2;

//     if((c =='+') || (c =='-'))
//     return 1;

//     return -1;
// }

// string infixToPostfix(string s){
//     string res;
//     stack<char> st;
//     for(int i=0; i<s.length(); i++){

//     if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
//         res += s[i];
//     }else if(s[i]=='('){
//         st.push(s[i]);
//     }else if(s[i]==')'){
//         while(!st.empty() && st.top() != '('){
//         res += st.top();
//         st.pop();
//         }
//         if(!st.empty()){
//         st.pop();
//         }
//     }else {
//         while(!st.empty() && prec(st.top()) >= prec(s[i])){
            
//             res += st.top();
//             st.pop();
//         }
//         st.push(s[i]);
//     }

//     }

//     while(!st.empty()){
//         res += st.top();
//         st.pop();
//     }

//     return res;
// }

// int main(){
    
//     cout<<infixToPostfix("(a-b/c)*(a/k-l)")<<endl;

//     return 0;
// }


      // infix To prefix

// #include<bits/stdc++.h>
// using namespace std;

// int prec(char c){
//     if(c=='^')
//     return 3;

//     if(c=='/' || c=='*')
//     return 2;

//     if(c=='+' || c== '-')
//     return 1;

//     return -1;
// }

// string infixToPrefix(string s){
//     string res;
//     stack<char> st;
//     reverse(s.begin(), s.end());
//     for(int i=0; i<s.length(); i++){

//     if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
//         res += s[i];
//     }else if(s[i]==')'){
//         st.push(s[i]);
//     }else if(s[i]=='('){
//         while(!st.empty() && st.top() != ')'){
//         res += st.top();
//         st.pop();
//         }
//         if(!st.empty()){
//         st.pop();
//         }
//     }else {
//         while(!st.empty() && prec(st.top()) >= prec(s[i])){
            
//             res += st.top();
//             st.pop();
//         }
//         st.push(s[i]);
//     }

//     }

//     while(!st.empty()){
//         res += st.top();
//         st.pop();
//     }

//     reverse(res.begin(), res.end());

//     return res;
// }

// int main(){

//     cout<<infixToPrefix("(a-b/c)*(a/k-l)")<<endl;

//     return 0;
// }