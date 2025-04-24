// Copyright 2025 Xiaohan All rights reserved.
// Created by: Xiaohan
// Created on: April 23, 2025
// This program calculates the square.

#include <cstdlib>
#include <iostream>
#include <string>
#include <ctime>

int main() {
    std::srand(std::time(0));
    // Generate a random number between 0 and 9
    int randomNum = std::rand() % 10;

    // Indicating the variable as string
    std::string userGuessStr;
    int userGuess;

    // Welcoming message
    std::cout << "Hello, welcome to the number guess program!" << std::endl;

    while (true) {
        std::cout << "Please guess a number between 0 to 9: ";
        std::cin >> userGuessStr;

        // Try to convert the string input to an integer
        try {
            userGuess = std::stoi(userGuessStr);

            // Check if the number is outside the allowed range
            if (userGuess < 0 || userGuess > 9) {
                std::cout << "Please enter a number between 0 to 9"
                << std::endl;
            } else {
                // Check if the user's guess matches the random number
                if (userGuess == randomNum) {
                    std::cout << "You guessed it right!" << std::endl;

                    // Exit the loop because the guess is correct
                    break;
                } else {
                    // The guess was incorrect, prompt user to try again
                    std::cout << "Try one more time" << std::endl;
                }
            }
        // Catch block handles if conversion to int fails
        } catch (std::invalid_argument const &err) {
            std::cout << "Please enter a valid integer" << std::endl;
        }
    }
    // Thank the user for playing
    std::cout << "Thank you for playing!" << std::endl;
}
