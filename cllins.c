#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head = NULL;

void addFirst(int val)
{
    //Write your code here
    struct node *newnode = malloc(sizeof(struct node));
    newnode->data = val;
    if(head==NULL)
    {
        newnode->next=newnode;
        head=newnode;
    }
    else
    {
        struct node *temp=head;
        while(temp->next!=head)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->next=head;
        head=newnode;
    }
}

void printList()
{
    struct node *temp = head;
do
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    while(temp != head);
}

int main()
{
    addFirst(10);
    addFirst(20);
    addFirst(30);
    
    printList();
}
