#pragma once
#ifndef CUSTOM_TYPE_H
#define CUSTOM_TYPE_H
#include <cmath>
// graphing
struct Vec2 {
    float x = 0.0;
    float y = 0.0;
};

enum MirrorAxis {
    MAxis_X,         // reflect over X axis; (a, -b);
    MAxis_Y,         // reflect over Y axis; (-a, b);
    MAxis_YEqX,      // y = x;               (b, a);
    MAxis_YEqNegX,   // y = -x;              (-b, -a);
    MAxis_Origin,    // x and y are negated; (-a, -b);
};

enum RotationValue {
    Rot_90,
    Rot_180,
    Rot_270,
};
// chemistry
const float avaNum = 6.02 * pow(10, 23);

#endif
