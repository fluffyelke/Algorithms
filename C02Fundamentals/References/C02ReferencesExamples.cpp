

/* 
 * File:   C02ReferencesExamples.cpp
 * Author: default
 * 
 * Created on December 12, 2023, 4:19 PM
 */

#include "C02ReferencesExamples.h"
#include <iostream>

void referencesExample01() {
    int a = 10;
    int &refToA = a;
    
    std::cout << "a: " << a << std::endl;
    std::cout << "++a: " << ++a << std::endl;
    std::cout << "r: " << refToA << std::endl;
    std::cout << "++r: " << ++refToA << std::endl;
    std::cout << "a: " << a << std::endl;
    
    int c = 40;
    refToA = c;
    std::cout << "refToA: " << refToA << std::endl;
    std::cout << "a: " << a << std::endl;
}
