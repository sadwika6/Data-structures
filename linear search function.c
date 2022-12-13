#include<stdio.h>
int search_element(int *arr,int size,int search)
{
	int flag=0,i;
	for(i=0;i<size;i++)
	{
		if(arr[i]==search)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
}
int main()
{
	int size,arr[100],i,search;
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&search);
	search_element(arr,size,search);
}
