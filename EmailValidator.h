#ifndef EMAILVALIDATOR_H
#define EMAILVALIDATOR_H

using namespace std;

#include <string>
#include <stdexcept>

class InvalidEmailException : public runtime_error {
public:
    InvalidEmailException(const string& message);
};

bool emailValidator(const string& email);
string collectEmail();

#endif
