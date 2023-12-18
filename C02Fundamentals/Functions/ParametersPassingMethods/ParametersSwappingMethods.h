

/* 
 * File:   ParametersSwappingMethods.h
 * Author: default
 *
 * Created on December 13, 2023, 11:55 AM
 */

#ifndef PARAMETERSSWAPPINGMETHODS_H
#define PARAMETERSSWAPPINGMETHODS_H

extern void mySwapByValue(int a, int b); //swap elements inside the function but not the actual passed elements.
extern void mySwapByAddress(int* a, int* b); //swap elements inside the function and passed elements.
extern void mySwapByReference(int& a, int& b); //swap elements inside the function and passed elements.
extern void testMySwap();

#endif /* PARAMETERSSWAPPINGMETHODS_H */

