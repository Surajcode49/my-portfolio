#include <bits/stdc++.h>
using namespace std;

class Stack{
    public:
    int size,top;
    int list[100];
    
    Stack(int s){
    size=s;
    top=-1;
    }

    virtual void push( int a);
    
    int pop(){
        top--;
    }

    void display(){
     
     if(top==-1){
        cout<<"Stack is Empty"<<endl;
        return ;
     }
     cout<<"THE ELEMENTS ARE:-> ";
     for(int i=0;i<=top;i++) cout<<list[i]<<" ";
     cout<<endl;
    }
    

};


class Simple_Stack:public Stack
{
    public:
    Simple_Stack(int s):Stack(s){}
    void push(int val){
        if(top==size-1){
            cout<<"OVERFLOW"<<endl;
            return ;
        }
        list[++top]=val;

    }
};

class Growable_Stack:public Stack
{
    public:
    Growable_Stack(int s):Stack(s){}
    void push(int val){
    list[++top]=val;
    }
};


int main(){
    int sz;
    cout<<"Enter the size of stack->";
    cin>>sz;
    Stack *st;
    
    
    while(1){
    cout<<"1. Simple\n 2. Growable\n"<<endl;
    cout<<"Choose the type of stack->"<<endl;
    int c;
    cin>>c;
    if(c==1) {
    st=new Simple_Stack(sz);
    cout<<"Simple Stack"<<endl;
    }else{
    cout<<"Growable Stack"<<endl;
     st=new Growable_Stack(sz);   
    }
    

    cout<<"1. Push\n2. Pop\n3.Display\n";

        cin>>c;
        if(c==1){
            int ele;
            cout<<"Enter a element to push"<<endl;
            cin>>ele;
            st->push(ele);
        }else if(c==2){
            st->pop();
        }else if(c==3){
            st->display();
        }else{
            cout<<"INVALID CHOICE"<<endl;
        }
    }

return 0;

}