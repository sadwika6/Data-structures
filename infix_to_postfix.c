#include<stdio.h>
#include<string.h>
char pf[100],st[100];
int top=-1;
int isoper(char ch)
{
	switch(ch)
	{
		
		case '+': return 1;
		case '-': return 1;
		case '*': return 2;
		case '/': return 2;
		case '(': return -1;
		case ')': return -1;
		default: return 0;
	}
}
char *infix_to_postfix(char *infix)
{
	int i,k=0;
	char op;
	for(i=0;infix[i]!='\0';i++)
	{
		//printf("%c\n",infix[i]);
		if(isoper(infix[i]))
		{
			if(infix[i]==')')
			{
				while(st[top]!='(')
				{
					op=st[top--];
					pf[k++]=op;
				}
				top--;
				continue;
			}
			if(top==-1 || st[top]=='(' || isoper(infix[i])>isoper(st[top]))
			{
				//printf("%c ",infix[i]);
				st[++top]=infix[i];
			}
			else
			{
				while(top!=-1 && isoper(infix[i])<=isoper(st[top]))
				{
					op=st[top--];
					pf[k++]=op;
				}
				st[++top]=infix[i];
			}
		}
		else
		{
			pf[k++]=infix[i];
		}
	}
	for(i=top;i>=0;i--)
	{
		pf[k++]=st[i];
	}
	return pf;
}
void main()
{
	char infix[100],pf[100];
	scanf("%[^\n]s",infix);
	strcpy(pf,infix_to_postfix(infix));
	printf("%s",pf);
}
