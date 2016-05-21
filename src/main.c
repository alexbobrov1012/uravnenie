#include <stdio.h>
#include "urav.h"


int main()
{
  int a, b, c;
  float answer1, answer2;
	
	printf("Vvedite koefficienti");
	scanf("%d%d%d",&a, &b ,&c);

	urav(a, b, c, &answer1, &answer2);
	printf("%f\t%f", answer1, answer2);
	
	return 0;
}
