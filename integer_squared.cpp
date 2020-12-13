// Copyright (c) 2020 Ryan Walsh All rights reserved
//
// Created by Ryan Walsh
// Created on December 10 2020
// this program calculates the square of each integer from 0 to the
// number entered

#include <iostream>
#include <string>
#include <cmath>

int main() {
// this program calculates the square of each integer from 0 to the
// number entered
    int positive_number;
    int counter;
    int integer_squared;
    std::string positive_number_string;


    // input
    std::cout << "Enter any positive integer please: ";
    std::cin >> positive_number_string;
    std::cout << "" << std::endl;
    integer_squared = 0;
    counter = 0;


    // process and output
    try {
        positive_number = std::stoi(positive_number_string);

        if (positive_number > 0) {
            std::cout << "The square of each number from 0 to "
                      << positive_number << " is:";
                      std::cout << "" << std::endl;
            for (counter = 0; counter < positive_number + 1; counter++) {
                integer_squared = pow(counter, 2);
                std::cout << counter << "² = " << integer_squared << std::endl;
}
    }   else {
            std::cout << positive_number << " was not a positive integer."
                    " Enter an integer above 0.";
            std::cout << "" << std::endl;
    }
    }catch (std::invalid_argument) {
        std::cout << positive_number_string << " is not an integer."
                    "Please enter an integer.";
    }
}
