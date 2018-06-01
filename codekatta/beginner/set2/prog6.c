#include<stdio.h>
void main()
{
	int n,k,count=0,i,j;
	scanf("%d %d",&n,&k);
	for(i=n+1;i<k;i++)
	{
		count=0;
		for(j=1;j<i;j++)
		{
		if(i % j==0)
		count++;
		}
		if(count==1)
		printf("%d ",i);
	}
}
