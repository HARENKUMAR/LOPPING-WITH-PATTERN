#include<stdio.h>

main()
{
	
	int i,j;
	
	for(i=1; i<=7; i++)
	{
		for(j=1; j<=5; j++)
			
			if(j==3 || i==1 || i==7)
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
