#include <iostream>
#define MAXSIZE 5
using namespace std;
int stack[MAXSIZE];
int top=-1;

peek()
{
    return stack[top];
}
bool isfull()
{
    if(top==MAXSIZE)
    {
        return true;
    }
    else{
        return false;
    }
}
bool isempty()
{
    if(top==-1)
    {
        return true;
    }
    else{
            return false;
    }
}
void push(int data)
{
    if(! isfull())
    {
        top=top+1;
        stack[top]=data;
        cout<<data<<" "<<"value is pushed"<<endl;
    }
    else{
        cout<<"can't insert"<<endl;
    }
}
int pop()
{
    if(! isempty())
    {
        int value=stack[top];
        top=top-1;
        cout<<value<<" "<<"popped"<<endl;
        return value;
    }
    else{
        cout<<"cant popped"<<endl;
        return -1;
    }
}

int main()
{
    push(10);
    push(20);
    push(30);
    pop();
    cout<<peek();

    return 0;
}
