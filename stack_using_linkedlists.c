#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *add;
};
typedef struct Node NODE;
NODE *Head=NULL;
void insert(int data)
{
	NODE *NN,*temp;
	NN=(NODE *)malloc(sizeof(NODE));
	NN->data=data;
	NN->add=NULL;
	if(Head==NULL)
	{
		Head=NN;
	}
	else
	{
		temp=Head;
		while(temp->add!=NULL)
		{
			temp=temp->add;
		}
		temp->add=NN;
	}
}
void display()
{
	NODE *temp;
	if(Head==NULL)
	{
		printf("NO NODES\n");
	}
	else
	{
		temp=Head;
		while(temp!=NULL)
		{
			//printf("%d %d %d %d\n",temp,temp+2,temp->data,temp->add);
			printf("%d ",temp->data);
			temp=temp->add;
		}
		printf("\n");
	}
}
int del()
{
	NODE *temp;
	int val;
	if(Head==NULL)
	{
		return -1;
	}
	else if(Head->add==NULL)
	{
		val=Head->data;
		Head=NULL;
		return val;
	}
	else
	{
		temp=Head;
		while((temp->add)->add!=NULL)
		{
			temp=temp->add;
		}
		val=temp->add->data;
		printf("%d\n",val);
		temp->add=NULL;
		return val;
	}
}
void main()
{
	int ch,data,val;
	while(1)
	{
		printf("1.insert 2.delete 3.display 4.exit");
		scanf("%d",&ch);
		if(ch==1)
		{
			//insert data
			scanf("%d",&data);
			insert(data);
		}
		else if(ch==2)
		{
			//delete node
			val=del();
			if(val==-1)
			{
				printf("NO NODES\n");
			}
			else
			{
				printf("%d\n",val);
			}
			
		}
		else if(ch==3)
		{
			//display data
			display();
		}
		else
		{
			break;
		}
	}
}
