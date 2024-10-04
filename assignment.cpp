#include<iostream>
#include<stack>
#include<vector>

using namespace std;

//1. gfg count the reversal

// int countRev (string s)
// {
//     // your code here
//     int count=0;
//     if(s.length()%2!=0)
//         return -1;
//     else{
        
//         stack< int> st;
//         for(int i=0; i<s.length();i++){
//             char c=s[i];
//             if(c=='{'){
//                 st.push(c);
//             }
//             else{
//                 if( !st.empty() && st.top()=='{')
//                     st.pop();
//                 else{
//                     st.push(c);
//                 }
//             }
//         }
//         while(!st.empty()){
//             char a=st.top();
//             st.pop();
//             char b=st.top();
//             st.pop();
            
//             if(a==b){
//                 count+=1;
//             }
//             else{
//                 count+=2;
//             }
//         }
//     }
//     return count;
// }

// 2 removing adjacent same char

// class Solution {
// public:
//     string removeDuplicates(string s) {
//         stack<int>st;
//         for(int i=0 ;i<s.length();i++){
//             char c=s[i];
//             if(st.empty()||st.top()!=c)
//                 st.push(c);
//             else{
//                 st.pop();
//             }
//         }
//         string ans;
//         while(!st.empty()){
//             ans+=st.top();
//             st.pop();
//         }
//         reverse(ans.begin(),ans.end());
//         return ans;
//     }
// };

// 3. celebrity problem 
// #include <stack>
// #include <vector>
// using namespace std;

// class Solution {
//   public:
//     // Function to find if there is a celebrity in the party or not.
//     int celebrity(vector<vector<int>>& mat) {
//         int n = mat.size();
//         stack<int> st;
        
//         // Push all people onto the stack
//         for (int i = 0; i < n; i++) {
//             st.push(i);
//         }
        
//         // Finding the potential celebrity
//         while (st.size() > 1) {
//             int a = st.top();
//             st.pop();
//             int b = st.top();
//             st.pop();
            
//             if (mat[a][b] == 1) {
//                 // a knows b, so a can't be a celebrity, but b can be
//                 st.push(b);
//             } else {
//                 // b knows a, so b can't be a celebrity, but a can be
//                 st.push(a);
//             }
//         }
        
//         // Final candidate
//         int candidate = st.top();
        
//         // Verify if the candidate is a celebrity
//         for (int i = 0; i < n; i++) {
//             if (i != candidate) {
//                 // Candidate should not know anyone, and everyone should know the candidate
//                 if (mat[candidate][i] == 1 || mat[i][candidate] == 0) {
//                     return -1;
//                 }
//             }
//         }
        
//         return candidate;
//     }
// };

// 4.finding next greater

// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */

// class Solution {
// public:
//     vector<int> nextLargerNodes(ListNode* head) {
        
//         stack<int>st;
//         vector<int>ll;
//         while(head){
//             ll.push_back(head->val);
//             head=head->next;
//         }
//         vector<int>ans(ll.size());
//         for(int i=0;i<ll.size();i++){
//             while(!st.empty() && ll[i]>ll[st.top()]){
//                 int a=st.top();
//                 st.pop();
//                 ans[a]=ll[i];
//             }
//             st.push(i);

//         }
//         return ans;
//     }
// };


// 

int main(){

}