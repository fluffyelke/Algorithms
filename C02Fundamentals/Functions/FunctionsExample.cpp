

/* 
 * File:   FunctionsExample.cpp
 * Author: default
 * 
 * Created on December 13, 2023, 10:43 AM
 */

#include <iostream>

#include "FunctionsExample.h"

int addTwoNumbers(int a, int b) {
    return (a + b);
}
void testAddTwoNumbers() {
    int a = addTwoNumbers(10, 25);
    std::cout << a << std::endl;
}
