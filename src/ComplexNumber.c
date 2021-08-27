#include <stdlib.h>
#include <stdio.h>

#include "../libs/ComplexNumber.h"

static ComplexNumber initNewComplexNumber(ComplexNumber newComplexNumber);

static ComplexNumber initNewComplexNumber(ComplexNumber newComplexNumber){
    newComplexNumber->real = 0;
    newComplexNumber->imaginary = 0;
    return newComplexNumber;

}

ComplexNumber newComplexNumber(void){
    ComplexNumber myComplexNumber = NULL;
    myComplexNumber = malloc(sizeof(struct _Complex_Number));
    myComplexNumber = initNewComplexNumber(myComplexNumber);
    return myComplexNumber;

}

ComplexNumber setComplexNumber(ComplexNumber phasor, float real, float imaginary){
    phasor->real = real;
    phasor->imaginary = imaginary;
    return phasor;
}

ComplexNumber getComplexNumberComponents(ComplexNumber phasor, float *real, float *imaginary){
    *real=phasor->real;
    *imaginary=phasor->imaginary;
}

ComplexNumber freeComplexNumber(ComplexNumber phasor){
    free(phasor);
}