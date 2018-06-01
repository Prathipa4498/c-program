#include<stdio.h>
void main()
{
	int n,t,rev=0;
	scanf("%d",&n);
	t=n;
	while(t!=0)
	{
	rev=rev*10;
	rev=rev+t%10;
	t=t/10;	
	}
	if(rev==n)
	printf("yes");
	else
	printf("no");
}
