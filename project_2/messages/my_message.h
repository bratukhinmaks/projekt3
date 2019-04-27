#ifndef PROJECT_2_MY_MESSAGE_H
#define PROJECT_2_MY_MESSAGE_H

#include <string>
#include <ostream>

using namespace std;

enum MessageType {
    TEXT = 0, ERROR = 1, TEST = 2, MULTIMEDIA = 3
};

class my_message {
public:
    virtual string getDescription() const = 0;
    virtual MessageType getMessageType() const = 0;

    friend ostream &operator<<(ostream &os, const my_message &message);
};

#endif //PROJECT_2_MY_MESSAGE_H
