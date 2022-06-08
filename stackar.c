/*Implementing stack using array*/
#include<stdio.h>
#include<stdlib.h>
#define n 5

int top=-1;
int stack[n];

int isfull()
{
	if(top==n-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int isempty()
{
	if(top==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void push()
{
	int entry;
	printf("Enter the data:");
	scanf("%d",&entry);
	if(isfull())
	{
		printf("\nOverflow");
	}
	else
	{
		top++;
		stack[top]=entry;
		printf("\n%d is pushed\n",stack[top]);
	}
}
void pop()
{
	if(isempty())
	{
		printf("\nUnderflow");
	}
	else
	{
		printf("\n%d is popped\n",stack[top]);
		stack[top]=-1;
		top--;
	}
}

void findtop()
{
	printf("\nTop position: %d",top);
	printf("\nTop value: %d",stack[top]);
}
void display()
{
	int i,x;
	x=top;
	for(i=x;i>=0;i--)
	{
		printf("\n %d",stack[i]);
	}
}
void main()
{
	int ch;
	while(1)
	{
	printf("\n1:Push \n2:Pop \n3:Display \n4:Find the top \n5:To check the stack is full \n6:To check stack is empty \n7:Exit"); 
	printf("\nEnter the your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		{
			push();
			break;
		}
		case 2:
		{
			pop();
			break;
		}
		case 3:
		{
			display();
			break;
		}
		case 4:
		{
			findtop();
			break;
		}
		case 5:
		{
			if(isfull())
			{
				printf("The stack is full");
			}
			else
			{
				printf("The stack is not full");
			}
			break;
		}
		case 6:
		{
			if(isempty())
			{
				printf("The stack is empty");
			}
			else
			{
				printf("The stack is not empty");
			}
			break;
		}
		case 7:
		{
			printf("Exiting");
			exit (0);
		}
	}
	}
}
			
