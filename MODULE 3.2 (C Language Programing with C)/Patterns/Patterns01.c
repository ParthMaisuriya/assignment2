#include<stdio.h>
int main()
{
	int i,j;
	//i row
	for(i=1;i<=5;i++)
	{
		// j column
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
