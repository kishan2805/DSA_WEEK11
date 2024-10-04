#include<iostream>
#include<stack>
using namespace std;

class stackarray{
    public:
        int *arr;
        int top;
        int size;

    stackarray(int size){
        arr=new int[size];
        this->size=size;
        this->top=-1;
    }

    void push(int data){
        if(!isoverflow()){
            top++;
            arr[top]=data;
        }
        else{
            cout<<"stack overflow"<<endl;
        }
        
    }
    void pop(){
        if(!isunderflow()){
            top--;
        }
        else{
            cout<<"stack is empty"<<endl;
        }
    }
    bool isempty(){
        if(top==-1)
            return true;
        else
            return false;
    }
    int topis(){
        return arr[top];
    }

    int getsize(){
        return top+1;
    }

    bool isoverflow(){
        if(top==size-1)
            return true;
        else
            return false;
    }
    bool isunderflow(){
        if(top==-1)
            return true;
        else
            return false;
    }

    void printelement(){
        cout<<"stack: "<<endl;
        for(int i=0;i<getsize();i++){
            cout<<  arr[i]<<"    ";
        }
        cout<<endl;
    }


};
void middleelement(stack<int>&sta, int pos){
    if(pos==1){
        cout<<sta.top();
        return;
    }
    int temp=sta.top();
    sta.pop();
    pos--;

    middleelement(sta,pos);
    sta.push(temp);
}

// insert at the bottom

void insertbottom(stack<int>&sta,int data){
    if(sta.empty()){
        sta.push(data);
        return;
    }
    int temp=sta.top();
    sta.pop();
    insertbottom(sta,data);
    sta.push(temp);
}

// reversing a stack
void reversestack(stack<int>&sta){
    if(sta.empty()){
        return;
    }
    
    int ele=sta.top();
    sta.pop();

    reversestack(sta);
    insertbottom(sta,ele);   
}

void printall(stack<int>sta2){
    while(!sta2.empty()){
        cout<<sta2.top()<<" ";
        sta2.pop();
    }

    cout<<endl;
}

void insertinsorted(stack<int>&sta, int ele){
    if(sta.top()<=ele || sta.empty()){
        sta.push(ele);
        return;
    }
    int temp=sta.top();
    sta.pop();
    insertinsorted(sta,ele);
    sta.push(temp);

}
void sortstack(stack<int>&sta){
    if(sta.empty()){
        return;
    }
    int temp=sta.top();
    sta.pop();
    sortstack(sta);
    insertinsorted(sta,temp);
}


int main(){

    //  // stack creation using stl

    // stack<int>st;  //creating a int type stack

    // st.push(20);   //inserting the values from top in stack
    // st.push(30);    
    // st.push(40);

    // cout<<st.size()<<endl;    //size
    // cout<<st.top()<<endl;    //top
    // st.pop();               //poping 
    // cout<<"poping "<<endl;
    // cout<<st.size()<<endl;
    // cout<<st.empty();     //empty
    // cout<<st.top();


    // stack using array

    // stackarray sta(5);

    // cout<<"stack is empty : "<<sta.isempty()<<endl;
    // sta.push(10);
    // sta.push(20);
    // sta.push(30);
    // sta.push(40);
    // sta.push(50);

    // int size=sta.getsize();
    // cout<<"size of stack :"<<size<<endl;
    // int top=sta.topis();
    // cout<<"top of stack :"<<top<<endl;
    // sta.printelement();

    // sta.push(60);

    // sta.pop();
    // sta.pop();
    // sta.pop();
    // sta.pop();
    // sta.pop();

    // sta.pop();

    //  // reversing using stack

    // stackarray sta2(5);
    // sta2.push(1);
    // sta2.push(2);
    // sta2.push(3);
    // sta2.push(4);
    // sta2.push(5);

    // while(!sta2.isempty()){
    //     cout<<sta2.topis()<<" ";
    //     sta2.pop();
    // }

    // middle element of a stack 
    stack<int> sta;

    sta.push(10);
    sta.push(20);
    sta.push(30);
    sta.push(40);
    sta.push(50);
    sta.push(60);

    // int pos;
    // if(sta.size()%2==0){
    //     pos=sta.size()/2;
    // }
    // else{
    //     pos=sta.size()/2 +1;
    // }

    // middleelement(sta,pos);
    // cout<<endl <<"size of stack after finding the middle : "<<sta.size()<<endl;
    //  //inserting at bottom 
    // insertbottom(sta,890);
    // cout<<sta.size();

    //  //reversing a stack

    // cout<<sta.top()<<endl;
    // printall(sta);
    // reversestack(sta);
    // cout<<sta.size();
    // cout<<endl<<"reversed top :"<<sta.top()<<endl; 
    // printall(sta);
    
    // insert in sorted array

    // printall(sta);
    // insertinsorted(sta,5);
    // printall(sta);

    //    // soting a stack
    // printall(sta);
    // sortstack(sta);
    // printall(sta);

}