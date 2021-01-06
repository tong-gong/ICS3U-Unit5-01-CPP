// Copyright (c) 2020 Tong Gong All rights reserved
//
// Created by Tong Gong
// Created on December 2020
// This is a for loop program.
// cpplint ./helloWorld.cpp 是style check 的指令


#include <iostream>
#include <string>

void fahrenheit() {
    int userInputNumber;
    int inPutnumber;
    float final;
    std::string userInputAsString;

    // input
    std::cout << "Enter the degrees you want to transform: " << std::ends;
    std::cin >> userInputAsString;
    std::cout << "" << std::endl;

    // process + output
        try {
            userInputNumber = std::stoi(userInputAsString);
            if (userInputNumber >= 0) {
                final = userInputNumber * 1.8 + 32;
                std::cout << userInputNumber << "°C is equral to " <<
                final << "°F" << std::ends;
            } else {
                std::cout << "You are not enter a positive integer" <<
                std::ends;
            }
        } catch (std::invalid_argument) {
            std::cout << "You are not type in an integer!" << std::ends;
        }
}
int main() {
    fahrenheit();
}
