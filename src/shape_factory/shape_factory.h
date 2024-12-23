#ifndef SHAPE_FACTORY_H
#define SHAPE_FACTORY_H

#include "shape.h"

// Enum for shape types
typedef enum {
    CIRCLE,
    RECTANGLE,
    TRIANGLE
} ShapeType;

// Factory function declaration
Shape* createShape(ShapeType type, ...);

#endif // SHAPE_FACTORY_H
