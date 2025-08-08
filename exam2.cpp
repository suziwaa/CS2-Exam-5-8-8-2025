#include <iostream>
#include <string>
#include "EmailValidator.h"
#include "Die.h"
#include "RollUntilDuplicate.h"

using namespace std;

// Template function
template <typename T>
void consoleLog(T message) {
    cout << message << endl;
}

int main() {
    // Email Validator
    collectEmail();

    // Template consoleLog()
    cout << "\n Testing consoleLog() " << endl;
    consoleLog(13);                                    // My moms fav number is 13, I think it's alright
    consoleLog(3.14);                                  // Pi!!
    consoleLog(string("Hello World!"));
    Die d6(6);
    consoleLog(d6);

    // How many rolls until duplicate
    cout << "\n Rolling until duplicate " << endl;
    Die yearDie(365);
    vector<int> result = rollUntilDuplicate(yearDie, {});

    cout << "Results: ";
    for (int r : result) {
        cout << r << " ";
    }
    cout << "\nTotal rolls: " << result.size() << endl;

    return 0;
}
