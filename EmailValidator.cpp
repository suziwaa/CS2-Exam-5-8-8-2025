#include "EmailValidator.h"
#include <iostream>

using namespace std;

InvalidEmailException::InvalidEmailException(const string& message)
    : runtime_error(message) {}

bool emailValidator(const string& email) {
    // Check for exactly one @ sign
    int atCount = 0;
    for (char c : email) {
        if (c == '@') atCount++;
    }
    if (atCount != 1) {
        throw InvalidEmailException("Email must contain exactly one '@' symbol.");
    }

    // Check that the email address does not start with '@'
    if (email[0] == '@') {
        throw InvalidEmailException("Email cannot start with '@'.");
    }

    // Check for '.' after the '@'
    size_t atPos = email.find('@');
    if (email.find('.', atPos) == string::npos) {
        throw InvalidEmailException("Email must contain at least one '.' after '@'.");
    }

    return true;
}

    string collectEmail() {
    string email;
    bool valid = false;

    while (!valid) {
        cout << "Enter your email: ";
        getline(cin, email);
        try {
            valid = emailValidator(email);
            cout << "Email address valid." << endl;
        }
        catch (const InvalidEmailException& e) {
            cout << "Error: " << e.what() << endl;
        }
    }
    return email;
}
