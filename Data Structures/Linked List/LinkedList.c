//Basic Operations to be Completed

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head=NULL;

// Insert element at the beginning 
void insert()
{
    int val;
    struct node *newnode=(struct node*) malloc(sizeof(struct node));
    printf("Enter the data(value)\n");
    scanf("%d",&val);
    newnode->data=val;
    newnode->next=head;
    head=newnode;
}

// List the elements present in the linked list
void display()
{
    struct node *dis=head;
    printf("LinkedList Elements:\n");
    while(dis!=NULL)
    {
        printf("%d\n",dis->data);
        dis=dis->next;
    }
}

int main()
{
    int ch;
    while(1)
    {
        printf("1.Insert\n2.Display\n");
        printf("Enter your choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:insert();
                   break;
            case 2:display();
                   break;
            default:printf("Invalid Choice !\n");
        }
    }
    return 0;
}
