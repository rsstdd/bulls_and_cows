#include "header_files/FBullCowGame.h"
#include <iostream>

FBullCowGame::FBullCowGame() { Reset(); }

int FBullCowGame::GetMaxTries() const { return MyMaxTries; }
int FBullCowGame::GetCurrentTry() const { return MyCurrentTry; }

int FBullCowGame::GetHiddenWordLength() const { return MyHiddenWord.length(); }

bool FBullCowGame::IsGameWon() const 
{
    return false; 
}

EWordStatus FBullCowGame::CheckGuessValidity(std::string Guess) const 
{ 
    // if guess isn't isogram, 
    if (false) {
        return EWordStatus::Not_Isogram;
    } else if (Guess.length() != GetHiddenWordLength()) {
        return EWordStatus::Wrong_Length;
    } else if (false) {
        return EWordStatus::Not_Lowecase;
    } else {
        return EWordStatus::Ok; // TODO Make actual error
    }
}


void FBullCowGame::Reset() { 
    const int MAX_TRIES = 8; 
    const std::string HIDDEN_WORD = "ant";

    MyMaxTries = MAX_TRIES;
    MyHiddenWord = HIDDEN_WORD;
    MyCurrentTry = 1;
   
    return; 
}

// receives a valid guess increments turn, and returns count
BullCowCount FBullCowGame::SubmitGuess(std::string Guess) {
    MyCurrentTry++; // increment the turn number
    BullCowCount BullCowCount; // BullCowCount is the type of the struct

    int HiddenWordLength = MyHiddenWord.length();
    for (int i = 0; i < HiddenWordLength; i++) {
        for (int j = 0; j < HiddenWordLength; j++) {
            if (Guess[j] == MyHiddenWord[i]) {
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

