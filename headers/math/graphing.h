#pragma once
#ifndef GRAPHING_H
#define GRAPHING_H
#include <iostream>
#include <cmath>
#include "../customTypes.h"
// graphing with lines
float getHypotenuse(float a, float b, bool print = false) {
    if (print)
        std::cout << "The hypotenuse length is: " << std::hypot(a, b) << std::endl; 
    return std::hypot(a, b);   
}

// graphing with coordinate points
void offsetPoints(Vec2f& vec, float xOffset, float yOffset, bool print = false) {
    vec.x += xOffset;
    vec.y += yOffset;
    if (print)
        std::cout << "New point: (" << vec.x << ", " << vec.y << ")" << std::endl;
}

void offsetPoints(Vec2f& vec, Vec2f& offsetVec, bool print = false) {
    vec.x += offsetVec.x;
    vec.y += offsetVec.y;
    if (print)
        std::cout << "New point: (" << vec.x << ", " << vec.y << ")" << std::endl;
}

void mirrorPoints(Vec2f& vec, int axis, bool print = false) {
    switch (axis) {
        case MAxis_X: {
            vec.y *= -1;
            break;
        }
        case MAxis_Y: {
            vec.x *= -1;
            break;
        }
        case MAxis_YEqX: {
            int t = 0;
            t = vec.y;
            vec.y = vec.x;
            vec.x = t;
            break;
        }
        case MAxis_YEqNegX: {
            int t = 0;
            t = vec.y * -1;
            vec.y = vec.x * -1;
            vec.x = t;
            break;
        }
        case MAxis_Origin: {
            vec.x *= -1;
            vec.y *= -1;
            break;
        }
        default: {
            std::cout << "Invalid mirror axis." << std::endl;
        }
    }
    if (print)
        std::cout << "New point: (" << vec.x << ", " << vec.y << ")" << std::endl;
        // todo: add offsets to line of reflection later?
        // 1. find distance between current point x/y coordinate and the offset of the mirror line
        // 2. take that distance and multiply it by 2. you found your new coordinate
}

void rotatePoints(Vec2f& vec, int rotation, bool print = false) {
    switch (rotation) {
        case Rot_90: {
            int t = vec.y * -1;
            vec.y = vec.x;
            vec.x = t;
            break;
        }
        case Rot_180: {
            vec.x *= -1;
            vec.y *= -1;
            break;
        }
        case Rot_270: {
            int t = vec.y;
            vec.y = vec.x * -1;
            vec.x = t;
        }
        default: {
            std::cout << "Invalid rotation axis." << std::endl;
        }
    }
        if (print)
            std::cout << "New point: (" << vec.x << ", " << vec.y << ")" << std::endl;
}
// misc
void printCoordinates(float x, float y) {
    std::cout << "(" << x << ", " << y << ")" << std::endl;
}

void printCoordinates(Vec2f& vec) {
    std::cout << "(" << vec.x << ", " << vec.y << ")" << std::endl;
}
#endif
