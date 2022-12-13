#include<stdio.h>
void sel_sort(int *arr,int n)
{
	int i,j,pos,swap;
	for(i=0;i<n;i++)
	{
		pos=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[pos]>arr[j])
			{
				pos=j;
			}
		}
		if(pos!=i)
		{
			swap=arr[pos];
			arr[pos]=arr[i];
			arr[i]=swap;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
int main()
{
	int n,arr[100],i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	sel_sort(arr,n);
}
