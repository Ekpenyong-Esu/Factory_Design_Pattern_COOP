
#include <stdio.h>
#include <stdlib.h>
#include "circle.h"
#include "shape.h"


#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif


// Area calculation for circle
double circle_area(Shape* shape) {
    if (!shape) {
        fprintf(stderr, "Error: Null shape pointer\n");
        return 0.0;
    }
    Circle* circle = (Circle*)shape;
    return M_PI * circle->radius * circle->radius;
}

// Drawing function for circle
void draw_circle(Shape* shape) {
    if (!shape) {
        fprintf(stderr, "Error: Null shape pointer\n");
        return;
    }
    Circle* circle = (Circle*)shape;
    printf("Drawing a Circle with radius %.2f\n", circle->radius);
}

// Circle creation function
Shape* createCircle(double radius) {
    Circle* circle = malloc(sizeof(Circle));
    if (circle) {
        circle->radius = radius;
        circle->base.calculate_area = circle_area;
        circle->base.draw = draw_circle;
    }
    return (Shape*)circle;
}
