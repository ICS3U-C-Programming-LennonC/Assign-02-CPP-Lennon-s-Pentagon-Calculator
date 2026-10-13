// Copyright (c) 2026 Lennon Cehajic All rights reserved.
// .
// Created by: Lennon Cehajic
// Date: October 13th, 2026
// This program calculates the area and
// perimeter of a pentagon from just one side length.

#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    // Declare variable.
    float length, area, perimeter;

    // Greet the user, then get the side length from the
    // user, and convert it to a float.
    std::cout << "Welcome to Lennon’s Pentagon Calculator. ";
    std::cout << "Please enter the side length of your pentagon(cm): ";
    std::cin >> length;

    // Calculate the area and perimeter.
    area = (1.0 / 4.0) * sqrt(5 * (5 + 2 * sqrt(5))) * pow(length, 2);
    perimeter = 5 * length;


    // Round the answers to two decimal places.
    std::cout << std::fixed << std::setprecision(2);

    // Display the area and perimeter.
    std::cout << "The area is: " << area << "cm²" << std::endl;
    std::cout << "The perimeter is: " << perimeter << "cm" << std::endl;
}
