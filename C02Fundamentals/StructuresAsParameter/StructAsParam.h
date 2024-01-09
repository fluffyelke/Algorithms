

/* 
 * File:   StructAsParam.h
 * Author: default
 *
 * Created on December 18, 2023, 2:08 PM
 */

#ifndef STRUCTASPARAM_H
#define STRUCTASPARAM_H

#include "../Structures/Rectangle.h"

extern int area(struct Rectangle rect);
extern void changeRectLength(struct Rectangle* rect, int length);
extern void testArea();


struct TestStruct {
    int myArr[5];
    int number;
};


extern void funTestArr(struct TestStruct t1);
extern void testStructArr();
#endif /* STRUCTASPARAM_H */

