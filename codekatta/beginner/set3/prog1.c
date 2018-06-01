#include<stdio.h>
void main()
{
	int n,a,d,i,sum=0;
	scanf("%d%d%d",&n,&a,&d);
	for(i=a;i<a+n*d;i+=d)
	{
		sum+=i;
	}
	printf("%d",sum);
}
