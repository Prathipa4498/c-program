#include<stdio.h>
int main(void)
{
	int i,j,r,o,n,k,ount=0;
	scanf("%d %d",&n,&k);
	int a[n][k];
	for(i=0;i<n;i++)
	for(j=0;j<k;j++)
	scanf("%d",&a[i][j]);
	for(i=0;i<k;i++)
	{
		ount=0;
		for(r=1;r<n;r++)
		{              
		for(j=o;j<k;j++)
		{
			if(a[0][i]==a[r][j])
			{
			ount++;
			a[r][j]='z';
			break;
				
			}
			}
	}
	
	if(ount==n-1)
	printf("%d ",a[0][i]);
	}
	
}
