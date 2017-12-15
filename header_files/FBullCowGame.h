// Make sure that this is only imported once
#pragma once
#include <string>
struct BullCowCount
{
    int Bulls = 0;
    int Cows = 0;
};

enum class CheckGuessValidity // C++ 11 (Class/"Strong Enum")
{
    Invalid_Status,
    Ok,
    Not_Isogram,
    Wrong_Length,
    Not_Lowecase
};

enum class EResetStatus 
{
    No_Hidden_Word,
    OK    
};

class FBullCowGame {
public:
    FBullCowGame(); // Constructor
    
    int GetCurrentTry() const;
    int GetHiddenWordLength() const;
    int GetMaxTries() const;
    bool IsGameWon() const;
    CheckGuessValidity CheckGuessValidity(std::string) const; // TODO make a more rich return value

    void Reset(); // TODO make a more rich return value
    BullCowCount SubmitGuess(std::string);

    // provide a method for counting b & c & incrementing try #

private:
    // See Constructor for initialization
    int MyCurrentTry;
    int MyMaxTries; 
    std::string MyHiddenWord;
    int CurrentWordLength;

    void setReset();
    bool IsIsogram(std::string);
};
