#include<stdio.h>
void main()
{
	int i=0,count=0;
	char str[10000];
	gets(str);
	while(str[i]!='\0')
	{
		if(str[i]<47||(str[i]>58&&str[i]<64)||(stsr[i]>90&&str[i]<97)||str[i]>122)
		count++;
		i++;
	}
	printf("%d",count);
}
