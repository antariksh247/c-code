#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
int main()
	{
		int ch;
		char ch1;
		struct node *first=NULL;
		
		do
		{
    
			printf("1.create");
			printf("2.display");
			scanf("%d",&ch);
			
			switch(ch)
			{
				case 1:
				createlinklist(&first);
				break;
				case 2:
				display(first);
				break;
			}
			printf("\ndo you want to continue(y/n)");
			scanf("%c",&ch1);
			}while(ch1!=3);
			}
			
	struct node* createnode()
			{
				int x;
				struct node* newnode=NULL;
				newnode=(struct node*)malloc(sizeof(struct node));
				if(newnode==NULL)
				{
					printf("memory not allowed");
					}
					else
					{
						printf("please enter the data");
						scanf("%d",&x);
						newnode->data=x;
						newnode->next=NULL;
						return (newnode);
						}
				}		
								
	void createlinklist(struct node** head)
			{
				struct node* newnode=createnode();
				struct node* temp=NULL;
				temp=*head;
				if(temp==NULL)	
				{
					*head=newnode;
				}	
				else
				{
					while(temp->next!=NULL)
					{
						temp=temp->next;
					}
					temp->next=newnode;
				}
	   	}
void display(struct node* head)
	   	{
	   		if(head==NULL)
	   		{
	   			printf("linklist is empty");
	   		}	
	   		else
	   		{
	   			while(head!=NULL)   
	   			{
	   				printf("%d\n",head->data);
	   				head=head->next;
	   				}
	   				}
	   					
}
