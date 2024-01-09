

/* 
 * File:   BaseExample.h
 * Author: default
 *
 * Created on January 3, 2024, 11:54 AM
 */

#ifndef BASEEXAMPLE_H
#define BASEEXAMPLE_H

struct SimpleRect {
    int width;
    int height;
};

extern void initializeSimpleRect(struct SimpleRect* rect, int lWidth, int lHeight);
extern int areaSimpleRect(struct SimpleRect rect);
extern void changeWidthSimpleRect(struct SimpleRect* rect, int lWidth);

extern void testMainSimpleRect();
#endif /* BASEEXAMPLE_H */

