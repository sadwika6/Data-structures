#include<stdio.h>
#include<stdlib.h>
int top=-1,n,*st;
void push(int val)
{
	if(top==n-1)
	{
		printf("Stack is full\n");
	}
	else
	{
		st[++top]=val;
	}
}
int pop()
{
	int val;
	if(top==-1)
	{
		return -1;
	}
	val=st[top--];
	return val;
}
void display()
{
	int i;
	if(top==-1)
	{
		printf("Stack is empty\n");
	}
	else
	{
		for(i=top;i>=0;i--)
		{
			printf("%d ",st[i]);
		}
		printf("\n");
	}
}
int main()
{
	int ch,val;
	scanf("%d",&n);
	st=(int*)calloc(n,sizeof(int));
	while(1)
	{
		printf("1.push,2.pop,3.display,4.exit");
		scanf("%d",&ch);
		if(ch==1)
		{
			//push
			scanf("%d",&val);
			push(val);
		}
		else if(ch==2)
		{
			//pop
			val=pop();
			if(val==-1)
			{
				printf("stack is empty\n");
			}
			else
			{
				printf("%d\n",val);
			}
		}
		else if(ch==3)
		{
			//display
			display();
		}
		else
		{
			break;
		}
	}
	return 0;
}
