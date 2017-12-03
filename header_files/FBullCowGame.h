// Make sure that this is only imported once
#pragma once
#include<string>

class FBullCowGame {
public:
    void Reset(); // TODO make a more rich return value
    int GetMaxTries();
    int GetCurrentTry();
    bool IsGameWon();
    bool CheckGuessValidity(std::string); // TODO make a more rich return value


// Please try and ignore for now.
private:
    void setReset();
    int MyCurrentTry;
    int MyMaxTries;
    bool IsIsogram(std::string);
};

