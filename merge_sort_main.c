#include<stdio.h>
void merge(int *arr,int l,int m,int h)
{
	int i,j,n1,k,n2,a[100],b[100];
	n1=m-l+1;
	n2=h-m;
	k=l;
	for(i=0;i<n1;i++)
	{
		a[i]=arr[k++];
	}
	k=m+1;
	for(i=0;i<n2;i++)
	{
		b[i]=arr[k++];
	}
	i=0;
	j=0;
	k=l;
	while(i<n1 && j<n2)
	{
		if(a[i]<b[j])
		{
			arr[k++]=a[i++];
		}
		else
		{
			arr[k++]=b[j++];
		}
	}
	while(i<n1)
	{
		arr[k++]=a[i++];
	}
	while(j<n2)
	{
		arr[k++]=b[j++];
	}
}
void merge_sort(int *arr,int n)
{
	int p,i,l,h,m;
	for(p=2;p<=n;p=p*2)
	{
		for(i=0;i<n;i=i+p)
		{
			l=i;
			h=l+p-1;
			m=(l+h)/2;
			if(h<=n)
			{
				merge(arr,l,m,h);
			}
		}
	}
	if(p/2<n)
	{
		merge(arr,0,(p/2)-1,n-1);
    }
}
void main()
{
	int i,arr[100],n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	merge_sort(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
