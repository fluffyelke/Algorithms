

/* 
 * File:   ParametersSwappingMethods.cpp
 * Author: default
 * 
 * Created on December 13, 2023, 11:55 AM
 */

#include <iostream>

#include "ParametersSwappingMethods.h"

void mySwapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}
void mySwapByAddress(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void mySwapByReference(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void testMySwap() {
    int x = 10;
    int z = 20;
    std::cout << "By Value" << std::endl;
    std::cout << "Before swap x: " << x << ", z: " << z << std::endl;
    mySwapByValue(x, z);
    std::cout << "After swap x: " << x << ", z: " << z << std::endl;
    
    x = 100;
    z = 200;
    std::cout << "By Address" << std::endl;
    std::cout << "Before swap x: " << x << ", z: " << z << std::endl;
    mySwapByAddress(&x, &z);
    std::cout << "After swap x: " << x << ", z: " << z << std::endl;
    
    x = 50;
    z = 75;
    std::cout << "By Reference" << std::endl;
    std::cout << "Before swap x: " << x << ", z: " << z << std::endl;
    mySwapByAddress(&x, &z);
    std::cout << "After swap x: " << x << ", z: " << z << std::endl;
}