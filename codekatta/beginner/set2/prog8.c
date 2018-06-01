#include<stdio.h>
#include<math.h>
void main()
{
	int start,end,n,k,i,digit,sum;
	scanf("%d %d",&start,&end);
	for(n=start+1;n<end;n++)
	{
	k=n;
	sum=0;
	digit=0;
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
	printf("%d\t",n);
	}
	
}
