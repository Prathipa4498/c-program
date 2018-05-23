#include<stdio.h>
#include<string.h>
void main()
{
	int i,j,l,k=0;
	char s[1000];
	gets(s);
	l=strlen(s);
	for(i=0;i<=l;i++)
	{
		if((s[i]==' ')||(s[i]=='\0'))
		{
			for(j=i-1;j>=k;j--)
			{
				printf("%c",s[j]);
			}
			k=i+1;
			printf(" ");
		}
		
	}
}
