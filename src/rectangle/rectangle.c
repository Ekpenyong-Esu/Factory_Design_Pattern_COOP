
#include <stdio.h>
#include <stdlib.h>
#include "rectangle.h"

// Area calculation for rectangle
double rectangle_area(Shape* shape) {
    if (!shape) {
        fprintf(stderr, "Error: Null shape pointer\n");
        return 0.0;
    }
    Rectangle* rect = (Rectangle*)shape;
    return rect->width * rect->height;
}

// Drawing function for rectangle
void draw_rectangle(Shape* shape) {
    if (!shape) {
        fprintf(stderr, "Error: Null shape pointer\n");
        return;
    }
    Rectangle* rect = (Rectangle*)shape;
    printf("Drawing a Rectangle with width %.2f and height %.2f\n",
           rect->width, rect->height);
}

// Rectangle creation function
Shape* createRectangle(double width, double height) {
    Rectangle* rect = malloc(sizeof(Rectangle));
    if (rect) {
        rect->width = width;
        rect->height = height;
        rect->base.calculate_area = rectangle_area;
        rect->base.draw = draw_rectangle;
    }
    return (Shape*)rect;
}
