#include<iostream>
#include<stack>
using namespace std;

class stackarray{
    public:
        int *arr;
        int top1;
        int top2;
        int size;
    stackarray(int size){
        arr=new int [size];
        this->size=size;
        top1=-1;
        top2=size;
    }

    void push1(int data){
        if(top2-top1==1){
            cout<<"overflow "<<endl;
        }
        else{
            arr[++top1]=data;
        }
    }
    void push2(int data){
        if(top2-top1==1){
            cout<<"overflow "<<endl;
        }
        else{
            arr[--top2]=data;
        }
    }

    void pop1(){
        if(top1==-1)
            cout<<"underflow in stack 1"<<endl;
        else{
            top1--;
        }
    }
    void pop2(){
        if(top2==size){
            cout<<"stack2 is empty "<<endl;
        }
        else{
            top2++;
        }
    }

    void printelement(){
        cout<<"printing the elements   : ";
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    
};

bool isValid(string s) {
        stack<char>st;
        for(int i=0;i<s.length();i++){
            char a=s[i];
            if(a=='(' || a=='{' || a=='['){
                st.push(a);
            }
            else{
                if(!st.empty()){
                    if(a== ')' && st.top()=='('){
                        st.pop();
                    }
                    else if(a== ']' && st.top()=='['){
                        st.pop();
                    }
                    else if (a== '}' && st.top()=='{'){
                        st.pop();
                    }
                    else{
                        return false;
                    }
                }
                else{
                    return false;
                }
            }
        }
        // if(st.empty()){
        //     return true;
        // }
        // else{
        //     return false;
        // }

        // or
        return st.empty();
}

bool isoperator(char a){
    if(a=='+'||a=='-'||a=='*'||a=='/'||a=='%')
        return true;
    return false;
}
void popstack(stack<char>&st){
    while(st.top()!='('){
        st.pop();
    }
    st.pop();
}

bool isredundant(string s){
    stack<char> st;
    for(int i=0;i<s.length();i++){
        char a=s[i];
        // if character is a opening bracket
        if(a=='(' ){
            st.push(a);
        }
        // if opening bracket is a opertor
        else if(isoperator(a)){
            st.push(a);
        }
        // else if (!(a>='a'&& a<='z')){
        //     return false;
        // }
        else{
            if(!st.empty()){
                if(a== ')' && isoperator(st.top())){
                    popstack(st);
                }

            }
        }
    }
    cout<<"size of stack : "<<st.size()<<endl;
    return !st.empty();
}

int main(){
    // stackarray sta(6);
    // sta.printelement();

    // sta.push1(1);
    // sta.push1(2);
    // sta.push2(100);
    // sta.push2(200);
    // sta.push1(3);
    // sta.push1(4);
    // sta.push2(400);
    // sta.printelement();
    // sta.pop1();
    // sta.pop2();
    // sta.printelement();
    // sta.pop2();
    // sta.pop2();
    // sta.printelement();

    // checkin g for valid brackets
    // string s="({[]})";
    // bool ans=isValid(s);
    // cout<<ans<<endl;


    // checking redundant brackets
    string s="(a+b*(c))";
    bool ans =isredundant(s);
    cout<<"the string is redundant if 1 else its not : "<<ans <<endl;


}