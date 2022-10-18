#pragma once
#ifndef GRAPHING_H
#define GRAPHING_H
#include <iostream>
#include <cmath>
#include "../customTypes.h"

float getHypotenuse(float a, float b, bool print) {
    if (print)
        std::cout << "The hypotenuse length is: " << std::hypot(a, b) << std::endl; 
    return std::hypot(a, b);   
}

void offsetPoints(Vec2f& vec, float xOffset, float yOffset) {
    vec.x += xOffset;
    vec.y += yOffset;
}

void printCoordinates(float x, float y) {
    std::cout << "(" << x << ", " << y << ")" << std::endl;
}

void printCoordinates(Vec2f& vec) {
    std::cout << "(" << vec.x << ", " << vec.y << ")" << std::endl;
}
#endif
