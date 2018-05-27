#include<stdio.h>
#include<string.h>
void main()
{
	int i,n,count=0;
	char a[10000];
	gets(a);
	n=strlen(a);
	if(n%2==0)
	printf("NO");
	else
	{
		for(i=0;i<n/2;i++)
		if(a[i]==a[n/2+1+i])
		count++;
	}
	if(count==n/2)
	printf("YES");
}
