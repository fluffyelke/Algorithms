

/* 
 * File:   Rectangle.cpp
 * Author: default
 * 
 * Created on January 3, 2024, 1:23 PM
 */

#include <iostream>

#include "Rectangle.h"

namespace chapter01 {
    
    static int rectangles = 0;

    Rectangle::Rectangle() 
        : width{1},
          height{1} {
            
            rectangles++;
            std::cout <<"Rectangle::Rectangle() Rectangle created id: " << rectangles << std::endl;
    }
    Rectangle::Rectangle(int lWidth, int lHeight) 
        : width{lWidth},
          height{lHeight} {
            
            rectangles++;
            std::cout <<"Rectangle::Rectangle(int lWidth, int lHeight)  Rectangle created id: " << rectangles << std::endl;
    }
    Rectangle::~Rectangle() {
        std::cout << "Rectangle::~Rectangle() Destruct Rectangle id: " << rectangles-- << std::endl;
    }
    int Rectangle::area() {
        return width * height;
    }
    int Rectangle::perimeter() {
        return 2 * (width + height);
    }
    int Rectangle::getWidth(){
        return width;
    }
    void Rectangle::setWidth(int lWidth){
        width = lWidth;
    }
}

