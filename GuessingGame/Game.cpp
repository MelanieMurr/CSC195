#include "Game.h"
#include <cstdlib>
#include <ctime>
#include <string>
#include <iostream>
using namespace std;

void Game::startGame(int lower, int upper) {
    lowerBound = lower;
    upperBound = upper;
    guessesLeft = 5;
    std::srand(std::time(0));
    secret = std::rand() % (upperBound - lowerBound + 1) + lowerBound;
}

std::string Game::guess(int input) {
    if (input > secret) {
      guessesLeft--;
      return "guess higher!";
    }
    if (input < secret) {
      guessesLeft--;
      return "guess lower!";
    }
    return "Correct!";
}

bool Game::hasGuessesRemaining() {
    return guessesLeft > 0;
}

int Game::getGuessesLeft() {
    return guessesLeft;
}




