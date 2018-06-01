#include<stdio.h>
void main()
{
	int n,k,i,digit=0,sum=0;
	scanf("%d",&n);
	k=n;
	while(k!=0)
	{
		k=k/10;
		digit++;
	}
	
	k=n;
		while(k!=0)
	{
		i=k%10;
		k=k/10;
		sum=sum+pow(i,digit);	
	}
	if(sum==n)
	printf("yes");
	else
	printf("no");
}
