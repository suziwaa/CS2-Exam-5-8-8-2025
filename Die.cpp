#include "Die.h"
#include <cstdlib>
#include <ctime>

using namespace std;

Die::Die(int s) : sides(s) {
    static bool seeded = false;
    if (!seeded) {
        srand(static_cast<unsigned int>(time(0)));
        seeded = true;
    }
}

int Die::roll() const {
    return (rand() % sides) + 1;
}

int Die::getSides() const {
    return sides;
}

ostream& operator<<(ostream& os, const Die& die) {
    os << "Die with " << die.sides << " sides";
    return os;
}
