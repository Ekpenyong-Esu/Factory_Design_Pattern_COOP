#include <stdarg.h>
#include "shape_factory.h"
#include "circle.h"
#include "rectangle.h"
#include "triangle.h"
#include <stdlib.h>



// Factory function to create shapes
Shape* createShape(ShapeType type, ...) {
    va_list args;
    va_start(args, type);

    switch(type) {
        case CIRCLE: {
            double radius = va_arg(args, double);
            va_end(args);
            return createCircle(radius);
        }
        case RECTANGLE: {
            double width = va_arg(args, double);
            double height = va_arg(args, double);
            va_end(args);
            return createRectangle(width, height);
        }
        case TRIANGLE: {
            double base_length = va_arg(args, double);
            double height = va_arg(args, double);
            va_end(args);
            return createTriangle(base_length, height);
        }
        default:
            va_end(args);
            return NULL;
    }
}
