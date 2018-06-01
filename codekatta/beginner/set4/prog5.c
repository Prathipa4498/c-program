#include<stdio.h>
void main()
{
	int i=0,count=0;
	char str[10000];
	gets(str);
	while(str[i]!='\0')
	{
		if(str[i]>47&&str[i]<58)
		count++;
		i++;
	}
	printf("%d",count);
}
