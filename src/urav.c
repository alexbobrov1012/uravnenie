#include <math.h>
#include <stdlib.h>
#include <stdio.h>


void urav (int a, int b, int c, int *x1, int *x2)
{
                float D;

		D = b*b -4*a*c;
		
		if (D>=0)
		{
	        	*x1 = (-b-sqrt(D)) / (2*a);
	            	*x2 = (-b+sqrt(D)) / (2*a);
		}
		else 
			printf("resheniy net");
	
	
}
