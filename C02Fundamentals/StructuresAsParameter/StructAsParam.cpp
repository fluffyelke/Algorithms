

/* 
 * File:   StructAsParam.cpp
 * Author: default
 * 
 * Created on December 18, 2023, 2:08 PM
 */

#include <iostream>

#include "StructAsParam.h"

int area(struct Rectangle rect) {
    return rect.height * rect.width;
}
void changeRectLength(struct Rectangle* rect, int length) {
    rect->width = length;
}
void testArea() {
    std::cout << "Area is: " << area(Rectangle{10, 20});
    printf("\nArea is: %d", area(Rectangle{3, 9}));
    
    struct Rectangle myRect{2, 4};
    std::cout << "\n1 Area of myRect is: " << area(myRect);
    changeRectLength(&myRect, 10);
    std::cout << "\n2 Area of myRect is: " << area(myRect);
}

void funTestStruct(struct TestStruct t1) {
    
}

void testStructArr() {
    struct TestStruct myStruct = { {1, 2, 3, 4, 5}, 10};
    funTestStruct(myStruct);
}