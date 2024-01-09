

/* 
 * File:   RecursionTypes.h
 * Author: default
 *
 * Created on January 5, 2024, 9:48 AM
 */

#ifndef RECURSIONTYPES_H
#define RECURSIONTYPES_H

#include <cstdio>


/**
 * Tail Recursion
 * When the function call is last statement in the function, and after that there
 * is no other statement.
 * All work is done before calling time.
 * Time Complexity for loop and recursion is equal O(n),
 * but Space is different for tail recursion is O(n), for loop function is O(1).
 * So for tail recursion is better to use loop instead of recursion
 */
extern void tailRecursion(int n); 
extern void loopTail(int n);


/**
 * Head Recursion
 * First we call the function, then we make statemnts, so all work is done on returning time
 */
extern void headRecursion(int n);
extern void loopHead(int n);    //not so easily converted to loop cycle.

/**
 * Tree Recursion
 * Linear recursion - recursive function which call himself only 1 time.(Tail, Head examples.)
 * Tree recursion - function which call himself more than 1 time,
 * Time complexity for this particular example with a function call himself 2 times is: O(2 pow N);
 * Space complexity is height of a the tree which is O(n)
 */
extern void treeRecursion(int n);

/**
 * Indirect Recursion, more than 1 function which call itself in circular fashion.
 */
extern void indirectRecA(int n);
extern void indirectRecB(int n);

/**
 * Nested Recursion.
 */
extern int nestedRecursion(int n);
#endif /* RECURSIONTYPES_H */

