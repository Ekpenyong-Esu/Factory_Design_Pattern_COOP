#ifndef SHAPE_H
#define SHAPE_H

// Shape structure definition
typedef struct Shape {
    double (*calculate_area)(struct Shape* shape);
    void (*draw)(struct Shape* shape);
} Shape;

// Common shape operations
void destroyShape(Shape* shape);

#endif // SHAPE_H
