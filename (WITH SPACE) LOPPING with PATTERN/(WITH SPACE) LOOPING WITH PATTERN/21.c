#include<stdio.h>

main()
{
	
	int i,j,s;
	
	for(i=5; i>=1; i--)
	{
		
		for(s=5; s>i; s--)
		  {
			printf(" ");
		
	   	  }
			
			for(j=1; j<=i; j++)
			 {
				(i%2==1)?printf("1")
						:printf("0");
				
				
			 
		    }
		    printf("\n");
}
}