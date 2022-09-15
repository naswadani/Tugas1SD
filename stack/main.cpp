#include <iostream>
#define maxsize 10
using namespace std;
class Stack{
    int maks;
    int data[maxsize];
public:
    Stack();
    void push(int x);
    void pop();
    void display();
    void Size();
    bool isfull();
    bool isempty();
    };
Stack::Stack(){
    maks = 0;
}

bool Stack::isfull(){
    if(maks == maxsize){
        return true;
    }
    else{
        return false;
    }
}

bool Stack::isempty(){
    if(maks == 0){
        return true;
    }
    else{
        return false;
    }
}
void Stack::push(int x){
    if(isfull()){
        cout<<"Stack is full"<<endl;
        return;
    }
    else{
        data[maks]=x;
        maks++;
    }
}
void Stack::pop(){
    if(isempty())
    {
        cout<<"nothing in list"<<endl;
        return;
    }
    else{
        maks--;
        cout<<"pop "<<data[maks]<<endl;
    }
}
void Stack::Size(){
    cout << "size of Stack is " << maks<<endl;
}
void Stack::display(){
        if(maks==0)
        {
            cout<<"nothing to display"<<endl;
        }
        else
        cout<<"Displaying"<<endl;
        for(int i=0;i<maks;i++)
        {
            cout<<data[i]<<endl;
        }
}
int main()
{
    Stack s;
    int ch,element,result;
    while(1)
    {
        cout<<"*--------------------------------------------------------------------*"<<endl;
        cout<<"1.PUSH  2.POP  3.DISPLAY  4.ISFULL  5.ISEMPTY  6.SIZE  7.EXIT "<<endl;
        cout<<"*--------------------------------------------------------------------*"<<endl;
    cin>>ch;
    if(ch==1)
    {
        cout<<"enter element ";
        cin>>element;
        s.push(element);
    }
    else if(ch==2)
    {
        s.pop();
    }
    else if(ch==3)
    {
        s.display();
    }
    else if(ch==4)
    {
        if(s.isfull())
            cout<<"STACK IS FULL"<<endl;
        else
            cout<<"STACK IS NOT FULL"<<endl<<"YOU CAN PUSH"<<endl;
    }
    else if(ch==5)
    {
        if(s.isempty())
            cout<<"STACK IS EMPTY"<<endl;
        else
            cout<<"STACK IS NOT EMPTY"<<endl<<"YOU CAN POP"<<endl;
    }
    else if(ch==6)
    {
        s.Size();
    }
    else
    return 0;
    }
    return 0;
}
