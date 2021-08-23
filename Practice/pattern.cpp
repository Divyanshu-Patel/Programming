#include<stdio.h>
int main()
{
	int i,j,k,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{	int c=1;
		for(k=n-1;k>=i;k--)
		printf(" ");
		for(j=1;j<=i;j++)
		{
		
		printf("* ");

		}
		printf("\n");
		}
		return 0;
	}

