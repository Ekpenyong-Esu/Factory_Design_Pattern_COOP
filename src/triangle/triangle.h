#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "shape.h"

// Triangle-specific structure
typedef struct {
    Shape base;
    double base_length;
    double height;
} Triangle;

// Triangle-specific function declarations
Shape* createTriangle(double base_length, double height);
double triangle_area(Shape* shape);
void draw_triangle(Shape* shape);

#endif // TRIANGLE_H
