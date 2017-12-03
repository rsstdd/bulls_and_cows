//  main.cpp
//  bulls_cows
//  Created by Ross Todd on 2/27/17.
// ---------------------------------

#include <iostream>
#include <string>

void PrintIntro();
void PlayGame();
bool AskToPlayAgain();
std::string GetGuess();

int main() {
  PrintIntro();
  PlayGame();
  AskToPlayAgain();

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
  std::cout<<"Enter your Guess: "<<std::endl;
  std::string Guess = "";
  getline(std::cin, Guess);
  std::cout<<std::endl;

  return Guess;
}

void PlayGame() {
  int NUMBER_TURNS = 5;

  for (int i = 0; i <= NUMBER_TURNS; i++) {
    GetGuess();
    std::string Guess = GetGuess();
    std::cout<<"You Guessed: "<<Guess<<"."<<std::endl;
    std::cout<<std::endl;
  }
}

bool AskToPlayAgain() {
  std::cout<<"Do you want to play again?";
  std::string Response = "";
  getline(std::cin, Response);

  return (Response[0] == 'y') || Response[0] == 'Y';
}
