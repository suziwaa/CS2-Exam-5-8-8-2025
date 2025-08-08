#include "RollUntilDuplicate.h"

using namespace std;

vector<int> rollUntilDuplicate(const Die& die, vector<int> rolls) {
    int rollResult = die.roll();

    // Base case
    for (int num : rolls) {
        if (num == rollResult) {
            rolls.push_back(rollResult);
            return rolls;
        }
    }

    // Recursive case
    rolls.push_back(rollResult);
    return rollUntilDuplicate(die, rolls);
}
