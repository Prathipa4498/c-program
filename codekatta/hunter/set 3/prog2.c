#include<stdio.h>
void main()
{
	int i,j,n,k=1;
	scanf("%d",&n);
	int a[n],o[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
	j=0;
	while(j<n)
	{
		if(j!=i)
		k=k*a[j];
		j++;
	}
	o[i]=k;
	k=1;
	}
	for(i=0;i<n;i++)
	printf("%d",o[i]);
}
