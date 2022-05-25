#include<iostream>
using namespace std;
#define n 100

class stack{
    int* arr;
    int top;

    public :
    stack(){
        arr = new int[n];
        top = -1;
    }

    void push(int x){
        if(top == n-1){
            cout<<"Stack Overflow";
            return;
        }
        top++;
        arr[top] = x; 
    }

    void pop(){
        if(top == -1){
            cout<<"Nothing to pop";
            return;
        }
        top--;
    }

    void Top(){
        if(top== -1 ){
            cout<<"No element present";
            return ;
        }
       cout<< arr[top];
    }
};

int main (){
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.pop();
    
    st.Top();

    return 0;

}