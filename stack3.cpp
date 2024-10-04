#include<iostream>
#include<stack>
#include<vector>
using namespace std;



// min stack 

// class MinStack {
// public:
//     vector<pair<int,int> >st;
//     MinStack() {
        
//     }
    
//     void push(int val) {
//         if(st.empty()){
//             // empty stack 
//             pair<int,int> p;
//             p.first=val;
//             p.second=val;
//             st.push_back(p);
//         }
//         else{
//             pair<int,int> p;
//             p.first=val;
//             int oldmin=st.back().second;
//             p.second=min(oldmin,val);
//             st.push_back(p);
//         }
//     }
    
//     void pop() {
//         if(!st.empty())
//             st.pop_back();
//         else{
//             return;
//         }
//     }
    
//     int top() {
//         pair<int,int> rightmost=st.back();
//         return rightmost.first;
//     }
    
//     int getMin() {
//         pair<int,int> rightmost=st.back();
//         return rightmost.second;
//     }
// };



void nextsmallerele(int arr[], int size,vector<int>&ans){
    stack<int>st;
    st.push(-1);
    for(int i=size-1;i>=0;i--){
        int curr=arr[i];
        while(st.top()>=curr){
            st.pop();
        }
        ans[i]=st.top();
        st.push(curr);
    }
}

void presmallerele(int arr[], int size,vector<int>&ans){
    stack<int>st;
    st.push(-1);
    for(int i=0;i<size;i++){
        int curr=arr[i];
        while(st.top()>=curr){
            st.pop();
        }
        ans[i]=st.top();
        st.push(curr);
    }
}

// LARGEST AREA IN A HISTOGRAM 

// class Solution {
// public:

//     vector<int> nextsmallerele(vector<int>arr){
//         vector<int>ans(arr.size());
//         stack<int>st;
//         st.push(-1);
//         for(int i=arr.size()-1;i>=0;i--){
//             int curr=arr[i];
//             while(st.top()!=-1 && arr[st.top()]>=curr){
//                 st.pop();
//             }
//             ans[i]=st.top();
//             st.push(i);
//         }
//         return ans;
//     }

//     vector<int> presmallerele(vector<int>arr){
//         vector<int>ans(arr.size());
//         stack<int>st;
//         st.push(-1);
//         for(int i=0;i<arr.size();i++){
//             int curr=arr[i];
//             while(st.top()!=-1 && arr[st.top()]>=curr){
//                 st.pop();
//             }
//             ans[i]=st.top();
//             st.push(i);
//         }
//         return ans;
//     }

//     int largestRectangleArea(vector<int>& heights) {
//         vector<int> preans=presmallerele(heights);
//         vector<int> nextans=nextsmallerele(heights);
//         for(int i=0;i<heights.size();i++){
//             if(nextans[i]==-1)
//                 nextans[i]=nextans.size();
//         }
//         int maxi=INT_MIN;

//         for(int i=0;i<heights.size();i++){
//             int length=heights[i];
//             int weidth=nextans[i]-preans[i]-1;
//             int area=length*weidth;
//             maxi=max(maxi,area);
//         }

//         return maxi;
        
        
//     }
// };

int main(){
    int arr[5]={8,4,6,2,3};
    int size=5;
    vector<int> ans(size);
    

    // nextsmallerele(arr,size,ans);
    // presmallerele(arr,size,ans);

    // for (int i=0;i<size;i++){
    //     cout<<ans[i]<<" ";
    // }
    // cout<<endl;

     

}