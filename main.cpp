//  main.cpp
//  bulls_cows
//
//  Created by Ross Todd on 2/27/17.
//

#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
void PlayGame();
bool AskToPlayAgain();

int main() {
  
  PrintIntro();
  PlayGame();
  
  AskToPlayAgain();

  return 0;
}

void PrintIntro()
{
  constexpr int WORD_LENGTH = 5;

  cout << "Welcome to Bulls and Cows, a fun word game"  << endl;
  cout << "can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of?" << endl;
  cout << endl;
  return;
}

string GetGuess()
{
  cout << "Enter your Guess: " << endl;
  string Guess = "";
  getline(cin, Guess);
  cout << endl;
  
  return Guess;
}

void PlayGame()
{
  constexpr int NUMBER_TURNS = 5;
  for (int i = 0; i <= NUMBER_TURNS; i++)
  {

    GetGuess();
    string Guess = GetGuess();
    cout << "You Guessed: " << Guess << "." << endl;
    cout << endl;
  }
}

bool AskToPlayAgain()
{
  cout << "Do you want to play again?";
  string Response = "";
  getline(cin, Response);
  
  return (Response[0] == 'y') || Response[0] == 'Y';
}
