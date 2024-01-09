

/* 
 * File:   ConvertCtoCpp.h
 * Author: default
 *
 * Created on January 3, 2024, 12:04 PM
 */

#ifndef CONVERTCTOCPP_H
#define CONVERTCTOCPP_H
namespace Convert {
    
    class SimpleRectangle {
        int width;
        int height;
    public:
        SimpleRectangle(int lWidth, int lHeight);
        void initialize(int lWidth, int lHeight);
        int area();
        void changeWidth(int lWidth);
    };
    
    
    extern void testMainCppSimpleRectangle();
}

#endif /* CONVERTCTOCPP_H */

