#include<stdio.h>
void main()
{
	int n,count=0,i;
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		count++;
	}
	if(count==1)
	printf("yes");
	else
	printf("no");
}
