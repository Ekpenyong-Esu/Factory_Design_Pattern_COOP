#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

// Circle-specific structure
typedef struct {
    Shape base;
    double radius;
} Circle;

// Circle-specific function declarations
Shape* createCircle(double radius);
double circle_area(Shape* shape);
void draw_circle(Shape* shape);

#endif // CIRCLE_H
