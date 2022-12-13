#include<stdio.h>
#include<string.h>
int st[100],top=-1;
int isoper(char ch)
{
	switch(ch)
	{
		
		case '+': return 1;
		case '-': return 1;
		case '*': return 1;
		case '/': return 1;
		default: return 0;
	}
}
int eval(int op2,char op,int op1)
{
	switch(op)
	{
		
		case '+': return op2+op1;
		case '-': return op2-op1;
		case '*': return op2*op1;
		case '/': return op2/op1;
	}
}
int postfixeval(char *str)
{
	char s[100];
	int i,k=0,num,op1,op2,res;
	for(i=0;str[i]!='\0';i++)
	{
		if(isoper(str[i]))//operator
		{
			op1=st[top--];
			op2=st[top--];
			res=eval(op2,str[i],op1);
			st[++top]=res;
		}
		else//operand
		{
			if(str[i]==' ' && k!=0)
			{
				s[k++]='\0'; 
				num=atoi(s);
				st[++top]=num;
				k=0;
			}
			else
			{
				s[k++]=str[i];
			}
		}
	}
	return st[0];
}
int main()
{
	char pf[100];
	int res;
	scanf("%[^\n]s",pf);
	res=postfixeval(pf);
	printf("%d",res);
}
