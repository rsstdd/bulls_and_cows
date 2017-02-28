//
//  main.cpp
//  bulls_cows
//
//  Created by Ross Todd on 2/27/17.
//  Copyright © 2017 Ross Todd. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main() {

  constexpr int WORD_LENGTH = 5;

  cout << "Welcome to Bulls and Cows, a fun word game"  << endl;
  cout << "can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of?" << endl;
  cout << "Enter your guess: ";

  string Guess = "";

  getline(cin, Guess);
  cout << "You Guessed: " << Guess << "." << endl;
  
  cout << "Enter another guess: ";
  getline(cin, Guess);
  cout << "You Guessed: " << Guess << "." << endl;
  


  return 0;
}
