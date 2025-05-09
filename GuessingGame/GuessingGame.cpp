#include "Game.h"
#include <iostream>
using namespace std;
#include <string>

int main() {
    cout << "Welcome to the Number Guessing Game!\n";

    Game game;

    int lower, upper, guess;

    cout << "Enter lower bound: ";
    cin >> lower;

    cout << "Enter upper bound: ";
    cin >> upper;

    game.startGame(lower, upper);
    cout << "Game has started! Pick a number, then start guessing!\n";

    while (game.hasGuessesRemaining()) {
        cout << "Enter your guess: ";
        cin >> guess;

        std::string result = game.guess(guess);

        if (result == "Correct!") {
            cout << "You won!\n";
            break;
        }

        if (result == "guess lower!") {
            cout << "Too low! " << game.getGuessesLeft() << " guesses left!\n";
        } else if (result == "guess higher!") {
            cout << "Too high! " << game.getGuessesLeft() << " guesses left!\n";
        }

        if (!game.hasGuessesRemaining()) {
            cout << "You lost!\n";
        }
    }
    cout << "Thanks for playing!";
}
