#include<stdio.h>
void insertion_sort(int *arr,int n)//33 44 22 66 77 32 88 65 55 34
{                                  // j  i   
	int j,i,temp=0;
	j=i-1;
	for(i=1;i<n;i++)
	{
		temp=arr[i];
		j=i-1;
		while(temp<arr[j])
		{
			arr[j+1]=arr[j];
			j--;
		}
		if(temp>arr[j])
		{
			arr[j+1]=temp;
		}
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
	insertion_sort(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
//44 33 22 66 77 32 88 65 55 34
//arr[j+1]=arr[j]
