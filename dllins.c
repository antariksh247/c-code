#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head = NULL;

void addLast(int val)
{
    //Write your code here
    
}

void printList()
{
    struct node *temp = head;

    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
}

int main()
{
    addLast(10);
    addLast(20);
    addLast(30);

    printList();

    return 0;
}
