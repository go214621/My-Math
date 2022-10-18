#pragma once
#ifndef GENERAL_MATH_H
#define GENERAL_MATH_H
#include <iostream>
#include <cmath>


float getPercentError() {
    float a = 0, b = 0;
    
    std::cout << "Enter the main number:" << std::endl;
    std::cin >> a;
    std::cout << "Enter the differing number:" << std::endl;
    std::cin >> b;
    
    float ans = ((fabs(a - b) / a) * 100);
    std::cout << "The percent error is: " << ans << std::endl;
    return ans;
}

float getDensity() {

    float mass = 0, volume = 0;
    
    std::cout << "Enter the mass:" << std::endl;
    std::cin >> mass;
    std::cout << "Enter the volume:" << std::endl;
    std::cin >> volume;
    
    float density = mass / volume;
    std::cout << "The density is: " << density << std::endl;
    return density;
}

float getPercentAbundance() {
    
    float individualAtomCount = 0, totalAtomCount = 0;
    
    std::cout << "Enter the number of atoms of one particular isotope: " << std::endl;
    std::cin >> individualAtomCount;
    std::cout << "Enter the total number of atoms: " << std::endl;
    std::cin >> totalAtomCount;
    
    float percentAbundance = (individualAtomCount / totalAtomCount) * 100;
    std::cout << "The percent abundance is: " << percentAbundance << std::endl;
    return percentAbundance;
}

#endif
