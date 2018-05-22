#include<stdio.h>
#include<string.h>
void main()
{
	int i,j,k,l;
	char s[100];
	gets(s);
	l= strlen(s);
	for(i=0;i<l-1;i++)
	for(j=i+1;j<l;j++)
	{
		if(s[i]==s[j])
		{
			for(k=j;k<l-1;k++)
			s[k]=s[k+1];
			s[l-1]='\0';
			l--;
			j--;
		}
	}
	printf("%s",s);
}
