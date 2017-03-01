//  main.cpp
//  bulls_cows
//
//  Created by Ross Todd on 2/27/17.
//

#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
void GetGuess();

int main() {

  PrintIntro();
  GetGuess();
  
  return 0;
}

void PrintIntro()
{
  // Introduce the game
  constexpr int WORD_LENGTH = 5;
  
  cout << "Welcome to Bulls and Cows, a fun word game"  << endl;
  cout << "can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of?" << endl;
  cout << "Enter your guess: ";
  return;
}

void GetGuess()
// Get guess
{
  string Guess = "";
  
  getline(cin, Guess);
  cout << "You Guessed: " << Guess << "." << endl;
  return;
}
