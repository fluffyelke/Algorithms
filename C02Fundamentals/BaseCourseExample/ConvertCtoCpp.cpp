

/* 
 * File:   ConvertCtoCpp.cpp
 * Author: default
 * 
 * Created on January 3, 2024, 12:04 PM
 */

#include "ConvertCtoCpp.h"

namespace Convert {
    
    SimpleRectangle::SimpleRectangle(int lWidth, int lHeight) 
        : width{lWidth},
          height{lHeight} {
        
    }
    
    void SimpleRectangle::initialize(int lWidth, int lHeight) {
        width = lWidth;
        height = lHeight;
    }
    int SimpleRectangle::area() {
        return width * height;
    }
    void SimpleRectangle::changeWidth(int lWidth) {
        width = lWidth;
    }
    
    void testMainCppSimpleRectangle() {
        SimpleRectangle myRect{10, 5};
//        myRect.initialize(10, 5);
        myRect.area();
        myRect.changeWidth(25);
    }
}
