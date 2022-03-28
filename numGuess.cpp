// Copyright (c) 2022 Coffi All rights reserved.
// Created by: Marc Coffi
// Date: March, 2022
// This is a guess the number game

#include <iostream>
#include <iomanip>

int main() {
    const int NUMBER = 5;
    float userInput;

    // Greeting message
    std::cout << "This is a number guessing game.\n";
    // input
    std::cout << "Enter a number between 0 and 9 : ";
    std::cin >> userInput;

    // Checking number and printing output
    if (userInput == NUMBER) {
  std::cout << "You guessed correctly!\n";
}
    if (userInput != NUMBER) {
  std::cout << "You guessed wrong :(\n";
}
}
