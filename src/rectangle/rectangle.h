#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

// Rectangle-specific structure
typedef struct {
    Shape base;
    double width;
    double height;
} Rectangle;

// Rectangle-specific function declarations
Shape* createRectangle(double width, double height);
double rectangle_area(Shape* shape);
void draw_rectangle(Shape* shape);

#endif // RECTANGLE_H
