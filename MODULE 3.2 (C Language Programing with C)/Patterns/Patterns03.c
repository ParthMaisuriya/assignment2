#include<stdio.h>
int main()
{
	int i,j,k;
	// i row
	for(i=1;i<=5;i++)
	{
		// k space
		for(k=1;k<i;k++)
		{
			printf(" ");
		}
		// j col
		for(j=i;j<=5;j++)
		{
			printf("*");
		//	printf("%d",i);
		//printf("%d",j);

		}
		
		printf("\n");
	}
}
