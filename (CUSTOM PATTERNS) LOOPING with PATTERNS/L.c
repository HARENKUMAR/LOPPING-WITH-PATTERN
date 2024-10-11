#include<stdio.h>

main()
{
	
	int i,j;
	
	for(i=1; i<=6; i++)
	{
		for(j=1; j<=5; j++)
			
			if(j==1 || i==6)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		printf("\n");	
		}
	}
