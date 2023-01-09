#pragma once
#ifndef CUSTOM_TYPE_H
#define CUSTOM_TYPE_H
#include <cmath>

// graphing
struct Vec2 {
    float x = 0.0;
    float y = 0.0;
};

class Polygon {
private:
    int sideCount;
public:
    Polygon() // constructor
    : sideCount(3)
    {}
    
    int getSideCount() { return sideCount; }
    void setSideCount(int newSideCount) { sideCount = (newSideCount <= 2) ? 3 : newSideCount; } // if the side count is ever zero, it'll cause problems
    int getTriCount() { return (sideCount <= 3) ? 0 : sideCount - 2; } 
    float getInteriorAngleSum() { return (sideCount - 2) * 180; }
    float getExteriorAngleSum() { return 360; }
    float getInteriorAngle() { return ((sideCount - 2) * 180) / sideCount; }
    float getExteriorAngle() { return 360 / sideCount; }
};

enum MirrorAxis {
    MAxis_X,        // reflect over X axis; (a, -b)
    MAxis_Y,        // reflect over Y axis; (-a, b)
    MAxis_YEqX,     // y = x;               (b, a)
    MAxis_YEqNegX,  // y = -x;              (-b, -a)
    MAxis_Origin,   // x and y are negated; (-a, -b)
};

enum RotationValue {
    Rot_Pos90,      // (x, y) -> (-y, x)
    Rot_Neg90,      // (x, y) -> (y, -x)
    Rot_Pos180,     // (x, y) -> (-x, -y)
    Rot_Neg180,     // (x, y) -> (-x, -y)
    Rot_Pos270,     // (x, y) -> (y, -x)
    Rot_Neg270,     // (x, y) -> (-y, x)
};


// chemistry
const float avaNum = 6.02e23;
const float planckConst = 6.63e-34;
const float lightspeed = 3.00e8;


#endif
