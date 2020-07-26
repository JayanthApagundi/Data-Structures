#include <iostream>
using namespace std;

#define size 5
int queue[size];
int front=0,rear=0;

void enqueue(){
  //cout<<"enqueue"<<endl;
  int val;
  if(rear==size)
     cout<<"Over-Flow"<<endl;
  else{
    cout<<"Enter the value to be inserted in the queue"<<endl;
    cin>>val;
    queue[rear]=val;
    rear++;
  }
}

void dequeue(){
  //cout<<"dequeue"<<endl;
  int val;
  if(front==rear)
    cout<<"Under-Flow"<<endl;
  else{
    cout<<"Deleted element:"<<queue[front]<<endl;
    front++;
  }
}

void display(){
  //cout<<"display"<<endl;
  int i;
  if(front==rear)
    cout<<"Queue is empty"<<endl;
  else{
    cout<<"Queue Elements"<<endl;
    for(i=front;i<rear;i++)
      cout<<queue[i]<<endl;
  }
}

int main()
{
  int ch;
  while(1){
    cout<<"1.Enqueue\n2.Dequeue\n3.Display\n4.Exit"<<endl;
    cout<<"Enter your choice"<<endl;
    cin>>ch;
    switch(ch){
      case 1:enqueue();
             break;
      case 2:dequeue();
             break;
      case 3:display();
             break;
      case 4:exit(0);
      default:cout<<"Invalid Choice !"<<endl;
    }
  }
  return 0;
}