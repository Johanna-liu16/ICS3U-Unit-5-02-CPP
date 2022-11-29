// Copyright (c) 2022 Johanna Liu All rights reserved
//
// Created by: Johanna Liu
// Created on: Nov 2022
// This program is converts c to f

#include <iostream>
#include <string>

void Area(int base, int height) {
    double areaTriangle;

    // process
    areaTriangle = base * height / 2;

    // output
    std::cout << "The area is " << areaTriangle << "." << std::endl;
}
int main() {
    std::string strBase;
    std::string strHeight;
    int base;
    double height;

    // input
    std::cout << "This program calculates the area of a triangle." << std::endl;
    std::cout << "Enter base of triangle: ";
    std::cin >> strBase;
    std::cout << "Enter height of triangle: ";
    std::cin >> strHeight;

    // process and output
    try {
        base = std::stoi(strBase);
        height = std::stoi(strHeight);
        // call functions
        Area(base, height);
    } catch (std::invalid_argument) {
        std::cout << "Invalid Integer.";
    }
    std::cout << std::endl;

    std::cout << "\nDone." << std::endl;
}
