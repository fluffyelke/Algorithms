

/* 
 * File:   ArraysEx.cpp
 * Author: default
 * 
 * Created on December 11, 2023, 1:15 PM
 */

#include <cstdio>
#include <iostream>

#include "ArraysEx.h"

void arrayDeclaration() {
    
    std::cout << "sizeOf Int: " << sizeof(int) << std::endl;
    
    //Declaration
    int arrA[5];
    arrA[0] = 12;
    arrA[1] = 15;
    arrA[2] = 20;
    
    std::cout << "size of arrA: " << sizeof(arrA) << std::endl;
    //Declaration and definition
    int arrB[5] = { 2, 4, 6, 8, 10 };
    
    int i;
    for(i = 0; i < 5; ++i) {
        printf("%d ", arrB[i]);
    }
    
    std::cout << "element at pos 1: " << arrA[1] << std::endl;
    printf("element at pos 1 using printf: %d\n", arrA[1]);
    
    std::cout << "element at pos 3: " << arrA[3] << std::endl;
    printf("element at pos 3 using printf: %d\n", arrA[3]);
    
    //we can delcare array and without specifying the number of elements
    int arrC[] = {2, 4, 5, 7, 8, 10};
    std::cout << "sizeof arrC: " << sizeof(arrC) << std::endl;
    int index = 0;
    for(int j = sizeof(int); j <= sizeof(arrC); j += sizeof(int)) {
        printf("%d ", arrC[index++]);
//        printf("%d ", *(arrC + j));
    }
    
}