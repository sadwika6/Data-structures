#include<stdio.h>
int min(int a,int b)
{
	if(a>b)
	{
		return b;
	}
	return a;
}
int fibi_search(int *arr,int n,int se,int *fib)
{
	int static l=-1;
	int k=n-1,m;
	if(arr[k]==se)
	{
		return 1;
	}
	if(fib[k-2]==0)
	{
		return 0;
	}
	m=min(l+fib[k-2],n-1);
	if(arr[m]==se || arr[k]==se)
	{
		return 1;
	}
	return fibi_search(arr,n,se,fib);
}
int main()
{
	int size,arr[100],i,search,fib[100];
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&search);
	fib[0]=0;
	fib[1]=1;
	for(i=2;i<size;i++)
	{
		fib[i]=fib[i-1]+fib[i-2];
	}
	if(fibi_search(arr,size,search,fib))
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
}
