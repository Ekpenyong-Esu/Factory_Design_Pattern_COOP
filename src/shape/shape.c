#include <stdlib.h>
#include "shape.h"

// Implements shape destruction
void destroyShape(Shape* shape) {
    if (shape) {
        free(shape);
    }
}
