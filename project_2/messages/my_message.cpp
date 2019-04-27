#include "my_message.h"

ostream &operator<<(ostream &os, const my_message &message) {
    os << message.getDescription() << endl;
    return os;
}
