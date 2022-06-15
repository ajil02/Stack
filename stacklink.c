/*Program to implement stack using linked list*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
	struct node
	{
		int data;
		struct node *next;
	};
	struct node *head=NULL,*pos=NULL,*tail=NULL,*del,*temp;
	int ch,entry,c=0,s,x=0,d,i,top=-1;
	while(1)
	{
		printf("\n1:Push \n2:Pop \n3:Display \n4:Find the top \n5:Exit"); 
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1:
			      {
			     	printf("\nEnter data:");
			     	scanf("%d",&entry);
			     	if(head==NULL)
				{
					head=(struct node *) malloc(sizeof(struct node));
					head->data=entry;
					head->next=NULL;
					pos=head;
					tail=head;
					top=0;
				
				}
				else
				{
					struct node *temp;
					temp=(struct node *)malloc(sizeof(struct node ));
					temp->data=entry;
					temp->next=head;
					head=temp;
					pos=head;
					top++;
					
				}
			     	break;
			      }
		case 2:
			{	
					if(head==NULL)
					{
						printf("\nUnderflow");
						top--;
					}
					else
					{
						struct node *del=head;
						head=head->next;
						del->next=NULL;
						free(del);
						top--;
					}
					break;
			}	
		
		case 3:
			      {
			        if(head==NULL)
			        {
			        	printf("Stack is empty");
			     	}
			     	else
			     	{
			        pos=head;
			        printf("\nElements are:");
			        while(pos!=NULL)
			        {
			        	printf("\t%d",pos->data);
			        	pos=pos->next;
			        }
			        }
			        break;
			       }
			       
		case 4:
			{	
				printf("The top position is: %d\n",top);
				printf("The top element is: %d",head->data);
				
			}
			break;
			       
		case 5:
			 {
			       	 printf("\nExiting");
			       	 exit(0);
			}	
		default:
			{
				printf("Wrong choice");
			}	
			}
		
	}
}
