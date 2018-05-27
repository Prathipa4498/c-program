#include<stdio.h>
void main()
{
	int i,j,n,count=1;
	scanf("%d",&n);
	int a[n],b[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	scanf("%d",&b[i]);
	for(i=0;i<n-1;i++)
	{
		if(b[i]<a[i+1])
		count++;
		else
		{
			b[i+1]=b[i];
		}
	}
	printf("%d",count);
	
}
	
