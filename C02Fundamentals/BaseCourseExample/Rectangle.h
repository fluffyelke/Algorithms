

/* 
 * File:   Rectangle.h
 * Author: default
 *
 * Created on January 3, 2024, 1:23 PM
 */

#ifndef RECTANGLE_H
#define RECTANGLE_H

namespace chapter01 {

class Rectangle {
public:
    Rectangle();
    Rectangle(int lWidth, int lHeight);
    ~Rectangle();
    int area();
    int perimeter();
    int getWidth();
    void setWidth(int lWidth);
private:
    int width;
    int height;
};

}
#endif /* RECTANGLE_H */

