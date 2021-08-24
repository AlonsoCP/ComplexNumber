#include <stdlib.h>
#include <stdio.h>

#include "../libs/unity.h"
#include "../libs/ComplexNumber.h"

#define REAL 0.02
#define IMAGINARY 0.1
#define DELTA 0.00005

void setUp(void){
    
}

void tearDown(void){
    
}

void test_ComplexNumberInit(void){
    ComplexNumber test_number = NULL;
    test_number = newComplexNumber(0,0);
    TEST_ASSERT_NOT_NULL(test_number);
    
}

void test_ComplexNumberSet(void){
     ComplexNumber test_number = NULL;
     float real=0, imaginary=0;
     test_number = newComplexNumber(0,0);
     
     test_number = setComplexNumber(REAL, IMAGINARY);
     real = getComplexNumberReal(test_number);
     imaginary= getComplexNumberImaginary(test_number);
     TEST_ASSERT_FLOAT_WITHIN(DELTA, REAL, real);
     TEST_ASSERT_FLOAT_WITHIN(DELTA, IMAGINARY, imaginary);
}

int main(void){
    UNITY_BEGIN();
    RUN_TEST(test_ComplexNumberInit, __LINE__); //dunder __
    RUN_TEST(test_ComplexNumberSet, __LINE__);
    return UNITY_END();
}