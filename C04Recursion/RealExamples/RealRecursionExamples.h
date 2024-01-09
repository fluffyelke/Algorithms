

/* 
 * File:   RealRecursionExamples.h
 * Author: default
 *
 * Created on January 5, 2024, 11:09 AM
 */

#ifndef REALRECURSIONEXAMPLES_H
#define REALRECURSIONEXAMPLES_H

#include <string>


//Recursive
extern int sumOfNaturalNumbers(int n);
//Loop
extern int sumOfNaturalNumbersLoop(int n); 
//Formula
extern int sumOfNaturalNumbersFormula(int n);

//Factorial
extern int recursiveFactorial(int n);

//Exponent
extern int powRecursive(int m, int n);

extern int improvedPowRecursive(int m, int n);
extern void printCalls();

//Taylor rows
extern double taylorRecursive(int x, int n);

//Taylor rows using Horners Rule
//loop function.
extern double taylorLoop(double x, double n);
//taylor recursive using horner
extern double taylorHornerRecursive(double x, double n);

//fibonaci recursive   O(2 pow N)   quadratic
extern int fibRecursive(int n);

//Improved Fibonaci recursive using global array  O(n) linear
extern long long int fibRecursiveImproved(int n);
extern void initFibs();


//Combinatorika    nCr
extern long long int combinations(long long int n, long long int r);

extern int recursiveCombinations(int n, int r);

extern int improvedCombinatorika(int n, int k);

extern void towerOfHanoy(int discs, const std::string left, const std::string middle, const std::string right);
extern void iterativeTowerOfHanoy();
#endif /* REALRECURSIONEXAMPLES_H */

