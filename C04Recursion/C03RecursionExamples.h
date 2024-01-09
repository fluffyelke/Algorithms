

/* 
 * File:   C03RecursionExamples.h
 * Author: default
 *
 * Created on January 4, 2024, 10:59 AM
 */

#ifndef C03RECURSIONEXAMPLES_H
#define C03RECURSIONEXAMPLES_H

/***
 * general form of recursion
 * 
 * type = return type of the function
 * 
 * type functionName(args) {
 *      //statements
 *      if(baseCondition) {
 *          //statements
 *          functionName(args); 
 *          //statements
 *      }
 * }
 */
namespace C03Recursion {
    extern void testPrintN();
    extern void testPrintNReverse();
    
    extern void testSumOfN();
    
    extern void testStaticVarRec();
    
    extern void treeRecursionExample();
    
    extern void indirectRecursionEx();
    
    extern void nestedRecEx();
    
    extern void testSumOfNaturalNumbers();
    
    extern void testFactorial();
    
    extern void testPowRecursive();
    
    extern void testTaylor();
    
    extern void testFibRecursive();
    
    extern void testCombinations();
    
    extern void simpleImprovedCombs();
    
    extern void testHanoy();
}

#endif /* C03RECURSIONEXAMPLES_H */

