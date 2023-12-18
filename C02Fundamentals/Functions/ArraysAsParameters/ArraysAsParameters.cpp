

/* 
 * File:   ArraysAsParameters.cpp
 * Author: default
 * 
 * Created on December 13, 2023, 12:30 PM
 */

#include <cstdio>
#include <cstdlib>
#include <iostream>

#include "ArraysAsParameters.h"

void passArrFunc(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
}

void passArrFunc2(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
}

void passArrFunc3Modify(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        arr[i] *= 2;
    }
}

int* createArray(int size) {
    int* arr;
    arr = (int*)malloc(size * sizeof(int));
    return (arr);
}
void deleteMemory(int* arr) {
    free(arr);
}
//void printArr(int* arr) {
//    for(auto elem : arr) {
//        
//    }
//}
void testArrFunc() {
    int arr[] = {2, 4, 6, 8, 10};
    passArrFunc3Modify(arr, 5);
    passArrFunc2(arr, 5);
    
    int* myArr = createArray(20);
    for(int i = 0; i < 20; i++) {
        myArr[i] = i * 2;
    }
    for(int i = 0; i < 20; ++i) {
        std::cout << myArr[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "Free memory" << std::endl;
    deleteMemory(myArr);
}