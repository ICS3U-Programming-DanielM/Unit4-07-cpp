// Copyright (c) 2022 Daniel Momoh All rights reserved.
// Created by: Daniel Momoh
// Created on: Nov. 25, 2022
// This program uses a for loop and an
// if statement to print integers ranging
// from 1000 to 2000.
#include <iostream>


int main() {
    // initializes the counter
    int counter;
    // this function determines the integer amount
    for (counter = 1000; counter < 2001; counter++) {
        // makes the loop in a row of 5
        if (counter % 5 == 0) {
            std::cout << std::endl;
        }
        std::cout << counter << " ";
    }
}