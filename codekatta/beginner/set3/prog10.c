#include<stdio.h>
void main()
{
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if(a>c)
	{
	if(d>b)
	{
		b+=60;
		a--;
	}
	a=a-c;
	b=b-d;
}
if(c>a)
{
	if(b>d)
	{
		d+=60;
		c--;
	}
	a=c-a;
	b=d-b ;
}
	printf("%d %d",a,b);
}
