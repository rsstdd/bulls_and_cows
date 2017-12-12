#include "header_files/FBullCowGame.h"
#include <iostream>

FBullCowGame::FBullCowGame() 
{ 
    Reset(); 
}

void FBullCowGame::Reset() { 
    const int MAX_TRIES = 8; 
    MyMaxTries = MAX_TRIES;

    const std::string HIDDEN_WORD = "ant";
    MyHiddenWord = HIDDEN_WORD;
    MyCurrentTry = 1;
    return; 
}

int FBullCowGame::GetMaxTries() const { return MyMaxTries; }
int FBullCowGame::GetCurrentTry() const { return MyCurrentTry; }
bool FBullCowGame::IsGameWon() const { return false; }
bool FBullCowGame::CheckGuessValidity(std::string) { return false; }

// receives a valid guess increments turn, and returns count
BullCowCount FBullCowGame::SubmitGuess(std::string Guess) {
    MyCurrentTry++; // increment the turn number
    BullCowCount BullCowCount; // BullCowCount is the type of the struct

    int HiddenWordLength = MyHiddenWord.length();
    for (int i = 0; i < HiddenWordLength; i++) {
        for (int j = 0; j < HiddenWordLength; j++) {
            if (Guess[i] == MyHiddenWord[i]) {
                if (i == j) {
                    BullCowCount.Bulls++;
                } else {
                    BullCowCount.Cows++;
                }
            }
        }
    }

    return BullCowCount;
}

