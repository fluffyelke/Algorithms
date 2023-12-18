

/* 
 * File:   ArraysAsParameters.h
 * Author: default
 *
 * Created on December 13, 2023, 12:30 PM
 */

#ifndef ARRAYSASPARAMETERS_H
#define ARRAYSASPARAMETERS_H

/**
 * this one can be pass only array, and not pointer.
 */
extern void passArrFunc(int arr[], int size);       

/**
 * this one can be pass pointer and array
 */
extern void passArrFunc2(int *arr, int size);     

extern void passArrFunc3Modify(int* arr, int size);

//Create and return a array from a function
extern int* createArray(int size); 
extern void deleteMemory(int* arr);
extern void printArr(int* arr);

extern void testArrFunc();
#endif /* ARRAYSASPARAMETERS_H */

