#include<stdio.h>
int main()
{	
	int a=1,i,j;
	//i row
	for(i=1;i<=5;i+=1)
	{
		//j column
		for(j=1;j<=i;j+=1)
		{
			printf("*");
		}
		printf("\n");
	}
}

