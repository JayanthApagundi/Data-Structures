#include <stdio.h>
#include <stdlib.h>

#define size 5
int stack[size];
int top=-1;

void push()
{
    int val;
    if(top==size-1)
        printf("OverFlow\n");
    else
    {
        printf("Enter the element to be inserted in the stack\n");
        scanf("%d",&val);
        top++;
        stack[top]=val;
    }
}

void pop()
{
    if(top==-1)
        printf("UnderFlow\n");
    else
    {
        printf("Deleted Element: %d\n",stack[top]);
        top--;
    }
}

void display()
{
    int i;
    if(top==-1)
        printf("Stack is Empty\n");
    else
    {
        printf("Stack Elements:\n");
        for(i=top;i>=0;i--)
           printf("%d\n",stack[i]);
    }
}

int main()
{
    int ch;
    while(1)
    {
        printf("1.Push\n2.Pop\n3.Display\n4.Exit\n");
        printf("Enter your choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:push();
                   break;
            case 2:pop();
                   break;
            case 3:display();
                   break;
            case 4:exit(0);
                   break;
            default:printf("Invalid Choice !\n");
        }
    }
}
