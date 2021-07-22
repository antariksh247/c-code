#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void deleteNode(int key)
{
    //Write your code here
    if(head==NULL)
    return;
    if(head->data==key&&head->next==head)
    {
        free(head);
        head=NULL;

    }
    else if (head->data==key)
    {
        struct node *last =head,*temp;
        while(last->next!=head)
        {
            last=last->next;
        }
        temp=head;
        last->next=head->next;
        free(temp);
    }
    else
    {
        struct node *current =head, *temp;
        while(current->next!=head)
        {
            if(current->next->data==key)
           {
            temp=current->next;
            current->next=temp->next;
            free(temp);
            break;
           }
           current=current->next;
        }
        
    }

}

void addLast(int val)
{
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = val;

    if(head == NULL)
    {
        head = newNode;
        newNode->next = newNode;
    }
    else
    {
        struct node *temp = head;
        while(temp->next != head)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = head;
    }
}

void printList()
{
    if(head == NULL)
        return;

    struct node *temp = head;

    do
    {
        printf("%d ", temp->data);
        temp = temp->next;

    }while(temp != head);

}

int main()
{
    addLast(10);
    addLast(20);
    addLast(30);
    
    int key;
    scanf("%d",&key);

    deleteNode(key);
    printList();

    return 0;
}
