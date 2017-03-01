//  main.cpp
//  bulls_cows
//
//  Created by Ross Todd on 2/27/17.
//

#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
string GetGuessPrintBack();

int main() {
  PrintIntro();

  constexpr int NUMBER_TURNS = 5;
  for (int i = 0; i <= NUMBER_TURNS; i++)
  {
    GetGuessPrintBack();
    cout << endl;
  }

  return 0;
}

void PrintIntro()
{
  constexpr int WORD_LENGTH = 5;

  cout << "Welcome to Bulls and Cows, a fun word game"  << endl;
  cout << "can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of?" << endl;
  return;
}

string GetGuessPrintBack()
{
  cout << "Enter your Guess: " << endl;
  string Guess = "";
  getline(cin, Guess);
  cout << "You Guessed: " << Guess << "." << endl;
  return Guess;
}
