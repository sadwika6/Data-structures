#include<stdio.h>
int search_element(int *arr,int size,int search)
{
	int m,l,h,i;
	l=0;
	h=size-1;
	while(l<=h)
	{
		m=(l+h)/2;
		if(arr[m]==search)
		{
			return 1;
		}
		if(arr[m]>search)
		{
			h=m-1;
		}
		if(arr[m]<search)
		{
			l=m+1;
		}
	}
	return 0;
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
	if(search_element(arr,size,search))
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
}
