#ifndef DIE_H
#define DIE_H

using namespace std;

#include <iostream>

class Die {
private:
    int sides;
public:
    Die(int s = 6);
    int roll() const;
    int getSides() const;

    friend ostream& operator<<(ostream& os, const Die& die);
};

#endif
