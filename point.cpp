#include "point.h"

point Calc(const point& a, const point& b) {

    return {
        a.x + b.x,
        a.y + b.y
    };
}