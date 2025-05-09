#include <string>

class Game {
private:
    int upperBound;
    int lowerBound;
    int guessesLeft;
    int secret;
public:
    void startGame(int lowerBound, int upperBound);
    std::string guess(int input);
    bool hasGuessesRemaining();
    int getGuessesLeft();
};