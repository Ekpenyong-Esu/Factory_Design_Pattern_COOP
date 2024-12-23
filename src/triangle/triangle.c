#include <stdio.h>
#include <stdlib.h>
#include "triangle.h"

// Area calculation for triangle
double triangle_area(Shape* shape) {

    if (!shape) {
        fprintf(stderr, "Error: Null shape pointer\n");
        return 0.0;
    }
    Triangle* triangle = (Triangle*)shape;
    return 0.5 * triangle->base_length * triangle->height;
}

// Drawing function for triangle
void draw_triangle(Shape* shape) {
    if (!shape) {
        fprintf(stderr, "Error: Null shape pointer\n");
        return;
    }
    Triangle* triangle = (Triangle*)shape;
    printf("Drawing a Triangle with base %.2f and height %.2f\n",
           triangle->base_length, triangle->height);
}

// Triangle creation function
Shape* createTriangle(double base_length, double height) {
    Triangle* triangle = malloc(sizeof(Triangle));
    if (triangle) {
        triangle->base_length = base_length;
        triangle->height = height;
        triangle->base.calculate_area = triangle_area;
        triangle->base.draw = draw_triangle;
    }
    return (Shape*)triangle;
}
