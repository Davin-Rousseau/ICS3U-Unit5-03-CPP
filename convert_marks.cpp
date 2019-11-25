// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Davin Rousseau
// Created on: November 2019
// This program uses return values

#include <iostream>

float percentage(std::string level) {
    // calculate percentage mark
    float percentage = 0;

    if (level == "4+") {
        percentage = 97;
    } else if (level == "4") {
        percentage = 90.5;
    } else if (level == "4-") {
        percentage = 83;
    } else if (level == "3+") {
        percentage = 78;
    } else if (level == "3") {
        percentage = 74.5;
    } else if (level == "3-") {
        percentage = 71;
    } else if (level == "2+") {
        percentage = 68;
    } else if (level == "2") {
        percentage = 64.5;
    } else if (level == "2-") {
        percentage = 61;
    } else if (level == "1+") {
        percentage = 58;
    } else if (level == "1") {
        percentage = 54.5;
    } else if (level == "1-") {
        percentage = 51;
    } else if (level == "R" || level == "N/A") {
        percentage = 0;
    } else {
        percentage = -1;
    }
    return percentage;
}


main() {
    // This function gets grade level and calls percentage
    // function

    std::string gradeLevel;
    int Percentage;

    // input
    std::cout << "Enter your grade level in number form(4+): ";
    std::cin >> gradeLevel;
    std::cout << std::endl;

    // call functions
    Percentage = percentage(gradeLevel);

    // output
    if (Percentage == -1) {
        std::cout << "Invalid Input" << std::endl;
    } else {
        std::cout << "Your percentage mark is:  " << Percentage << "%"
                  << std::endl;
    }
}
