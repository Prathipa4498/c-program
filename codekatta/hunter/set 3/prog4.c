#include<stdio.h>
void main()
{
	int i,j,n,k,ref=0,count=0;
	scanf("%d %d",&n,&k);
	int a[n];
	for(i=0;i<n;i++)
	{
		 scanf("%d",&a[i]);	
	}
	for(i=0;i<n;i++)
	ref=ref+i;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]+a[j]==k)
			{
				printf("YES");
				exit (0);
			}
			count++;
		}
	}
	if(count==ref)
	printf("NO");
}
