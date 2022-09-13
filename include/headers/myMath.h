#pragma once
#ifndef MY_MATH_H
#define MY_MATH_H
#include <iostream>
#include <cmath>

float getHypotenuse() {
    float a = 0;
    float b = 0;
    
    std::cout << "Enter length A:" << std::endl;
    std::cin >> a;
    std::cout << "Enter length B:" << std::endl;
    std::cin >> b;
    
    std::cout << "The hypotenuse length is: " << std::hypot(a, b) << std::endl; 
    return std::hypot(a, b);   
}
    

#endif
