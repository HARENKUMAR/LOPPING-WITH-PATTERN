#include<stdio.h>
main()
{
	char i,j;
	int n='A';

	
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		{
		   	printf("%c",n,j);
		   	n++;
		}
	 printf("\n");	
	}
}