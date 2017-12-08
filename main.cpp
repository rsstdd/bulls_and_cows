//  main.cpp
//  Console Exe. that makes use of the BullCow Class
//  This acts as the view in a MVC pattern
//  Created by Ross Todd on 2/27/17.
// ---------------------------------

#include <iostream>
#include <string>
#include "FBullCowGame.cpp"

void PrintIntro();
void PlayGame();
bool AskToPlayAgain();
std::string GetGuess();

FBullCowGame BCGame; // Instantiate a new game GLOBAL!!

int main() {

    std::cout << BCGame.GetCurrentTry();

    bool bPlayAgain = false;
    do {
        PrintIntro();
        PlayGame();
        AskToPlayAgain();
    } while (bPlayAgain);

    return 0;
}

void PrintIntro() {
    int WORD_LENGTH = 5;

    std::cout<<"Welcome to Bulls and Cows, a fun word game"<<std::endl;
    std::cout<<"can you guess the "<<WORD_LENGTH<<" letter isogram I'm thinking of?"<<std::endl;
    std::cout<<std::endl;
    return;
}

std::string GetGuess() {
    int CurrentTry = BCGame.GetCurrentTry();

    std::cout<<"Guess: "<<CurrentTry<<std::endl;
    std::string Guess = "";
    std::getline(std::cin, Guess);
    
    std::cout<<std::endl;

    return Guess;
}

void PlayGame() {
    BCGame.Reset();
    int MaxTries = BCGame.GetMaxTries();

    // TODO change from FOR to WHILE loop once validating tries
    for (int i = 0; i <= MaxTries; i++) {
        GetGuess();
        std::string Guess = GetGuess(); // TODO make loop checking valid

        // submit valid guess to the game
        // print number of bulls and cows
        std::cout<<"You Guessed: "<<Guess<<"."<<std::endl;
        std::cout<<std::endl;
    }
    
    // TODO Add a Game Summary
    
}

bool AskToPlayAgain() {
    std::cout<<"Do you want to play again?";
    std::string Response = "";
    std::getline(std::cin, Response);

    return (Response[0] == 'y') || Response[0] == 'Y';
}
