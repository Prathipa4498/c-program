#include<stdio.h>
void main()
{
	int num,pow,sum=1,i;
	scanf("%d%d",&num,&pow);
	for(i=0;i<pow;i++)
	sum=sum*num;
	printf("%d",sum);
	
}
