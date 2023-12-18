

/* 
 * File:   PointersToStructures.cpp
 * Author: default
 * 
 * Created on December 13, 2023, 10:21 AM
 */

#include <cstdlib>

#include "PointersToStructures.h"

void testPtrToStructure() {
    struct Rectangle rect{10, 5};
    
    struct Rectangle* ptrR = &rect;
    //we can use this syntax
    /**
     * Because dot operator '.' has greatest power than the operator '*', we should enclose the pointer in brackets.
     */
    (*ptrR).height = 40;        
    (*ptrR).width = 50;
    
    //or we can use this simple access using operator '->'
    ptrR->width = 20;
    ptrR->height = 25;
    
    //Creating dynamically object on the heap
    struct Rectangle *rectPtr = nullptr;
    //using malloc
    rectPtr = (struct Rectangle*)malloc(sizeof(struct Rectangle));
    delete rectPtr;
    rectPtr = nullptr;
    
    //or using new operator
    rectPtr = new Rectangle;
    delete rectPtr;
}