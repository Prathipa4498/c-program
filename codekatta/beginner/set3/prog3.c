#include<stdio.h>
void main()
{
	int n,i,k;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	k=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]<k)
		k=a[i];
	}
	printf("%d",k);
}
