#include<stdio.h>
void main()
{
	int sum=0,n,k,i;
	scanf("%d %d",&n,&k);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<k;i++)
	sum=sum+a[i];
	printf("%d",sum);
}
