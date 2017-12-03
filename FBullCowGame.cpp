#include "header_files/FBullCowGame.h"

FBullCowGame::FBullCowGame() { Reset(); }

void FBullCowGame::Reset() { 
    MyCurrentTry = 1;
    MyMaxTries = 8; 

    return; 
}

int FBullCowGame::GetMaxTries() const { return MyMaxTries; }
int FBullCowGame::GetCurrentTry() const { return MyCurrentTry; }
bool FBullCowGame::IsGameWon() const { return false; }
bool FBullCowGame::CheckGuessValidity(std::string) { return false; }


