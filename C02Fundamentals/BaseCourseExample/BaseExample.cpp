

/* 
 * File:   BaseExample.cpp
 * Author: default
 * 
 * Created on January 3, 2024, 11:54 AM
 */

#include "BaseExample.h"

void initializeSimpleRect(struct SimpleRect* rect, int lWidth, int lHeight) {
    rect->width = lWidth;
    rect->height = lHeight;
}

int areaSimpleRect(struct SimpleRect rect) {
    return rect.height * rect.width;
}
void changeWidthSimpleRect(struct SimpleRect* rect, int lWidth) {
    rect->width = lWidth;
}

void testMainSimpleRect() {
    struct SimpleRect myRect;
    initializeSimpleRect(&myRect, 10, 5);
    areaSimpleRect(myRect);
    changeWidthSimpleRect(&myRect, 20);
}