

/* 
 * File:   C03SimpleRecursions.cpp
 * Author: default
 * 
 * Created on January 4, 2024, 11:07 AM
 */

#include <cstdio>

#include "C03SimpleRecursions.h"


namespace C03SimpleRec {
    
    int printN(int n) {
        
        if(n > 0) {
            //Ascending phase   in cycles
            printf("%d ", n);   //execute at calling time
            
            printN(n - 1);
            //Descending Phase  only in recursion   power of recursion is here
        }
        
    }
    
    int printNReverse(int n) {
        
        if(n > 0) {
            //Ascending phase   in cycles
            printNReverse(n - 1);
            //execute at returning time
            //Descending Phase  only in recursion   power of recursion is here
            printf("%d ", n);   
            
        }
        
    }
    
    int sumOfN(int n) {
        if(n > 0) {
            return sumOfN(n - 1) + n;
        }
        return 0;
    }
    
    int staticVarInRecFun(int n) {
        static int x = 0;
        if(n > 0) {
            x++;
            return staticVarInRecFun(n - 1) + x;
        }
        return 0;
    }
}
