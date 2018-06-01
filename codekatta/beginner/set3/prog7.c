#include<stdio.h>
#include<string.h>
void main()
{
	int i,j=0,l;
	char str[1000];
	gets(str);
	l=strlen(str);
	for(i=0;i<l;i++)
	{
		if(str[i]>47&&str[i]<58)
		j++;
	}
	if(j==l)
	printf("yes");
	else
	printf("no");
}
