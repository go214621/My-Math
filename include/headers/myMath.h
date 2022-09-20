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


float getPercentError() {
    float a = 0;
    float b = 0;
    
    std::cout << "Enter the main number:" << std::endl;
    std::cin >> a;
    std::cout << "Enter the differing number:" << std::endl;
    std::cin >> b;
    
    float ans = ((fabs(a - b) / a) * 100);
    std::cout << "The percent error is: " << ans << std::endl;
    return ans;
}

float getDensity() {

    float mass = 0;
    float volume = 0;
    
    std::cout << "Enter the mass:" << std::endl;
    std::cin >> mass;
    std::cout << "Enter the volume:" << std::endl;
    std::cin >> volume;
    
    float density = mass / volume;
    std::cout << "The density is: " << density << std::endl;
    return density;
}

#endif
