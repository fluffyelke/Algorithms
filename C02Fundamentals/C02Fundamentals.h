

/* 
 * File:   C02Fundamentals.h
 * Author: default
 *
 * Created on December 11, 2023, 2:59 PM
 */

#ifndef C02FUNDAMENTALS_H
#define C02FUNDAMENTALS_H

#include "Arrays/ArraysEx.h"
#include "Structures/C02StructuresExamples.h"
#include "Pointers/C02PointersExamples.h"
#include "References/C02ReferencesExamples.h"
#include "PointerToStructure/PointersToStructures.h"
#include "Functions/FunctionsExample.h"
#include "Functions/ParamtersPassingMethods/ParametersSwappingMethods.h"
#include "Functions/ArraysAsParameters/ArraysAsParameters.h"

void structuresExamples() {
    checkStructSize();
    checkStudentSize();
    deckOfCards();
    testSimpleTest();
}

void pointersExamples() {
    simplePointer();
    heapPointer();
    ptrToArray();
}

void referencesExamples() {
    referencesExample01();
}

void pointersToStructures() {
    testPtrToStructure();
}

void testFunctions() {
    testAddTwoNumbers();
    testMySwap();
}

void testPassArrAsFunc() {
    testArrFunc();
}
#endif /* C02FUNDAMENTALS_H */

