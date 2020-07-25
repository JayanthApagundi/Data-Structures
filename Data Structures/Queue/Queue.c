#include <stdio.h>
#include <stdlib.h>

#define size 5
int queue[size];
int front=0,rear=0;

void enqueue()
{
    int val;
    if(rear==size)
        printf("OverFlow\n");
    else
    {
        printf("Enter the value to be inserted in the queue\n");
        scanf("%d",&val);
        queue[rear]=val;
        rear++;
    }
}

void dequeue()
{
    if(front==rear)
        printf("UnderFlow\n");
    else
    {
        printf("Deleted Element: %d\n",queue[front]);
        front++;
    }
}

void dispay()
{
    int i;
    if(front==rear)
        printf("Queue is Empty\n");
    else
    {
        printf("Queue Elements:\n");
        for(i=front;i<rear;i++)
           printf("%d\n",queue[i]);
    }
}

int main()
{
    int ch;
    while(1)
    {
        printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
        printf("Enter your choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:enqueue();
                   break;
            case 2:dequeue();
                   break;
            case 3:dispay();
                   break;
            case 4:exit(0);
            default:printf("Invalid Choice !\n");
        }
    }
    return 0;
}
