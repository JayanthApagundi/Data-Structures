#include <iostream>
using namespace std;

#define size 5
int stack[size];
int top=-1;

void push(){
  int val;
  if(top==size-1)
    cout<<"Over-Flow"<<endl;
    else{
      cout<<"Enter the value to be inserted in the stack"<<endl;
      cin>>val;
      top++;
      stack[top]=val;
    }
}

void pop(){
  if (top==-1)
    cout<<"Under-Flow"<<endl;
  else{
    cout<<"Deleted element:"<<stack[top];
    top--;
  }
}

void display(){
  int i;
  if(top==-1)
    cout<<"No Elements present in the stack"<<endl;
  else{
  for(i=top;i>=0;i--)
    cout<<stack[i]<<endl;
  }
}

int main()
{
  int ch;
  while(1){
    cout<<"1.Push\n2.Pop\n3.Display\n4.Exit"<<endl;
    cout<<"Enter your choice"<<endl;
    cin>>ch;
    switch(ch){
      case 1:push();
             break;
      case 2:pop();
             break;
      case 3:display();
             break;
      case 4:exit(0);
      default:cout<<"Invalid Choice !"<<endl;
    }          
  }
  return 0;
}
