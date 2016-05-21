#include "urav.h"
#include "ctest.h"

CTEST(urav_suite, test__equation) 
{
	const int a =1, b = 4, c = 4;

        float x1, x2;

 	urav (a, b, c, &x1, &x2);
 
	 float expected_x1 = -2;
	 float expected_x2 = -2;
	
	ASSERT_DBL_NEAR(expected_x1, x1);
	ASSERT_DBL_NEAR(expected_x2, x2);
}
CTEST(urav_suite, test__equation2) 
{
	const int a =1, b = 6, c = 9;

        float x1, x2;

 	urav (a, b, c, &x1, &x2);
 
	 float expected_x1 = -3;
	 float expected_x2 = -3;
	
	ASSERT_DBL_NEAR(expected_x1, x1);
	ASSERT_DBL_NEAR(expected_x2, x2);
}




