/**
 * @Author Alonso Cabezut Portilla
 * @Date   17/Aug/2021
 * @Proyect ComplexNumber.h
 * @Copyright TDA Otoño 2021
 **/

#ifndef ComplexNumber_h
#define ComplexNumber_h

// Standard Libraries
#include <stdio.h>

// User Libraries


// Data Types

struct _Complex_Number{
    float real;
    float imaginary;
}

// Wrapper
typedef struct _Complex_Number * ComplexNumber;


//Interfaces


// Generator/Constructors

ComplexNumber newComplexNumber(float real, float imaginary);







#endif