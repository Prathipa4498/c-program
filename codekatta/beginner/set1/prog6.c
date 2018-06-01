#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	if(n%4==0)
	{
		if(n%100==0)
		{
			if(n%400==0)
			printf("Yes");
			else
			printf("No");
		}
		else
		printf("yes");
		
	}
	else
	printf("no");
}
