#include <iostream>
#include <vector>

#include "C03RecursionExamples.h"
#include "SimpleExamples/C03SimpleRecursions.h"
#include "TypeOfRecursions/RecursionTypes.h"
#include "RealExamples/RealRecursionExamples.h"

namespace C03Recursion {
    void testPrintN() {
        C03SimpleRec::printN(10);
    }
    void testPrintNReverse() {
        C03SimpleRec::printNReverse(10);
    }
    void testSumOfN() {
        std::cout << C03SimpleRec::sumOfN(10) << std::endl;
    }
    
    void testStaticVarRec() {
        std::cout << C03SimpleRec::staticVarInRecFun(10) << std::endl;
    }
    
    void treeRecursionExample() {
        treeRecursion(5);
    }
    void indirectRecursionEx() {
        indirectRecA(20);
    }
    void nestedRecEx() {
        std::cout << "\nResult: " << nestedRecursion(95) << std::endl;;
    }
    void testSumOfNaturalNumbers() {
        std::cout << "Sum of first 100 numbers Recursive is: " << sumOfNaturalNumbers(100) << std::endl;
        std::cout << "Sum of first 100 numbers Loop      is: " << sumOfNaturalNumbersLoop(100) << std::endl;
        std::cout << "Sum of first 100 numbers Formula   is: " << sumOfNaturalNumbersFormula(100) << std::endl;
    }
    
    void testFactorial() {
        std::cout << "Factorail: " << recursiveFactorial(5) << std::endl;
    }
    
    void testPowRecursive() {
        std::cout << "  normal exponent result: " << powRecursive(2, 20) << std::endl;
        std::cout << "Improved exponent result: " << improvedPowRecursive(2, 20) << std::endl;
        printCalls();
    }
    
    void testTaylor() {
        std::cout << "Taylor normal recursive: " << taylorRecursive(4, 32) << std::endl;
        std::cout << "            Taylor loop: " << taylorLoop(4, 32) << std::endl;
        std::cout << "Taylor Horner recursive: " << taylorHornerRecursive(4, 32) << std::endl;
    }
    
    void testFibRecursive() {
        std::cout << "Fib Recursive: " << fibRecursive(10) << std::endl;
        initFibs();
        std::cout << "Improved Fib Recursive: " << fibRecursiveImproved(50) << std::endl;
    }
    
    void testCombinations() {
        int result = combinations(12, 4);
        std::cout << "Total combinations: " << result << std::endl;
        int result2 = recursiveCombinations(12, 4);
        std::cout << "Total combinations Recursive: " << result2 << std::endl;
    }
    void simpleImprovedCombs() {
        improvedCombinatorika(49, 6);
    }
    
    void testHanoy() {
        towerOfHanoy(3, "Left", "Middle", "Right");
        iterativeTowerOfHanoy();
    }
}

