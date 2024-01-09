

/* 
 * File:   RecursionTypes.cpp
 * Author: default
 * 
 * Created on January 5, 2024, 9:48 AM
 */

#include "RecursionTypes.h"
//Tail Recursion
/////////////////////////////
void tailRecursion(int n) {
    if (n > 0) {
        
        printf("%d ", n);
        tailRecursion(n - 1);
        
    }
} 

void loopTail(int n) {
    while(n > 0) {
        printf("%d ", n);
        n--;
    }
}
////////////////////////////

//Head Recursion
///////////////////////////
void headRecursion(int n) {
    if (n > 0) {
        headRecursion(n - 1);
        printf("%d ", n);
    }
}

void loopHead(int n) {
    int num = 1;
    while (num <= n) {
        printf("%d ", num);
        num++;
    }
}
///////////////////////////

//Tree Recursion
///////////////////////////
void treeRecursion(int n) {
    if (n > 0) {
        printf("%d ", n);
        treeRecursion(n - 1);
        treeRecursion(n - 1);
    }
}

///////////////////////////


//Indirect Recursion
///////////////////////////
void indirectRecA(int n) {
    if(n > 0) {
        printf("%d ", n);
        indirectRecB(n - 1);
    }
}
void indirectRecB(int n) {
    if(n > 1) {
        printf("%d ", n);
        indirectRecA(n / 2);
    }
}
///////////////////////////
//Nested Recursion
///////////////////////////
int nestedRecursion(int n) {
    printf("\n%d ", n);
    if(n > 100) {
        return n - 10;
    }
    else {
        return (nestedRecursion(nestedRecursion(n + 11)));
    }
}