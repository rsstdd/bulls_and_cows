// Make sure that this is only imported once
#include <string>

class FBullCowGame {
public:
    FBullCowGame(); // Constructor
    
    int GetMaxTries() const;
    int GetCurrentTry() const;
    bool IsGameWon() const;

    void Reset(); // TODO make a more rich return value
    bool CheckGuessValidity(std::string); // TODO make a more rich return value

    // provide a method for counting b & c & incrementing try #
    
// Please try and ignore for now.
private:
    // See Constructor for initialization
    int MyCurrentTry;
    int MyMaxTries; 

    void setReset();
    bool IsIsogram(std::string);
};
