#include<stdio.h>
void main()
{
	int n,i,j;
	scanf("%d",&n);
	char a[n];
	for(i=0;i<n;i++)
	{
		scanf("%c",&a[i]);
	}
	if(a[0]==a[n-1])
	n=n-1;
	for(i=0;i<n;i++)
	printf("%c",a[i]);
}
