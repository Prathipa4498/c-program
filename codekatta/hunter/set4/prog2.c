#include<stdio.h>
void main()
{
	int i=0,n,a[1000],j,sum=0,count=0;
	scanf("%d",&n);
	while(n>10)
	{
		sum+=n%10;
		n=n/10;
	}
	sum+=n;
	while(sum>10)
	{
		a[i]=sum%10;
		sum=sum/10;
		i++;
	}
	a[i]=sum;
	for(j=0;j<=i/2;j++)
	{
		if(a[j]==a[i-j])
		count++;
	}
	if(count==(i/2)+1)
	printf("YES");
	else
	printf("NO");
    
}
