#include "ctest.h"
void KY(int a, int b, int c, float *x1, float *x2);

CTEST(distance_suite, simple_test1) {
    // Given
    const int a = 1;
    const int b = 7;
    const int c = 6;
 
    // When
	float x1, x2;
	KY(a,b,c,&x1,&x2);
 
    // Then
    const double rx1 = -6;
    const double rx2 = -1;
    ASSERT_DBL_NEAR(rx1,x1);
    ASSERT_DBL_NEAR(rx2,x2);
}

CTEST(distance_suite, simple_test2) {
    // Given
    const int a = -1;
    const int b = -7;
    const int c = -6;
 
    // When
	float x1, x2;
	KY(a,b,c,&x1,&x2);
 
    // Then
    const double rx1 = -1;
    const double rx2 = -6;
    ASSERT_DBL_NEAR(rx1,x1);
    ASSERT_DBL_NEAR(rx2,x2);
}


    
    
