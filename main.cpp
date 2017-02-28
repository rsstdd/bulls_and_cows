//
//  main.cpp
//  bulls_cows
//
//  Created by Ross Todd on 2/27/17.
//  Copyright © 2017 Ross Todd. All rights reserved.
//

#include <iostream> // Including iostream
using namespace std; // Avoid repition. Set the namespace. In this case "std"

int main() {
  
  constexpr int WORD_LENGTH = 5;
  
  cout << "Welcome to Bulls and Cows, a fun word game"  << endl;
  cout << "can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of? \n";
  
  return 0;
}
