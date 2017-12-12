// Make sure that this is only imported once
#pragma once
#include <string>
struct BullCowCount
{
    int Bulls = 0;
    int Cows = 0;
};

class FBullCowGame {
public:
    FBullCowGame(); // Constructor
    
    int GetMaxTries() const;
    int GetCurrentTry() const;
    bool IsGameWon() const;

    void Reset(); // TODO make a more rich return value
    bool CheckGuessValidity(std::string); // TODO make a more rich return value
    BullCowCount SubmitGuess(std::string);

    // provide a method for counting b & c & incrementing try #

private:
    // See Constructor for initialization
    int MyCurrentTry;
    int MyMaxTries; 
    std::string MyHiddenWord;

    void setReset();
    bool IsIsogram(std::string);
};
