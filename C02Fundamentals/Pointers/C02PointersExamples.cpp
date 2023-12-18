#include <cstdio>
#include <iostream>

#include "C02PointersExamples.h"


void simplePointer() {
    int a = 10;
    int *p;
    p = &a;
    std::cout << "&a: " << &a << std::endl;
    std::cout << "&p: " << &p << std::endl;
    printf("a: %d\n", a);
    printf("*p: %d\n", *p);
}

void heapPointer() {
    //C example,
    int *p;     //all variables are declared in stack. To use a heap we should use 'c' function call malloc()
    /**
     * malloc() function take a memory size in bytes, so we need the size of how much memory we want.
     * malloc() returns a void* so we should type cast it to desire type, in this case int*
     */
    p = (int*)malloc(5 * sizeof(int));        //create space for 5 integers.
    p[0] = 2;
    p[1] = 5;
    p[2] = 6;
    p[3] = 10;
    p[4] = 15;
    for(int i = 0; i < 5; i++) {
        std::cout << p[i] << " ";
    }
    std::cout << std::endl;
    free(p);
    
    //Cpp example,
    int *intPtr;     //all variables are declared in stack. To use a heap we should use 'c' function call malloc()
    intPtr = new int[5];        //create space for 5 integers.
    intPtr[0] = 20;
    intPtr[1] = 50;
    intPtr[2] = 60;
    intPtr[3] = 100;
    intPtr[4] = 150;
    for(int i = 0; i < 5; i++) {
        std::cout << intPtr[i] << " ";
    }
    std::cout << std::endl;
    delete [] intPtr;
}

void ptrToArray() {
    int myArr[5] = { 2, 4, 6, 8, 10 };
    int *p;
    p = myArr;
    for(int i = 0; i < 5; i++) {
        std::cout << p[i] << " ";
    }
    std::cout << std::endl;
}