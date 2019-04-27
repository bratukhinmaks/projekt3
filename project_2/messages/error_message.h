#ifndef PROJECT_2_ERROR_MESSAGE_H
#define PROJECT_2_ERROR_MESSAGE_H


#include "my_message.h"

enum error_level {
    LOW = 0, MEDIUM = 1, HIGH = 2
};

class error_message: public my_message {
    static string errorDesc[3];

    string text;
    error_level lvl;

public:
    error_message(const string &text, error_level lvl);

public:
    string getDescription() const override;

    MessageType getMessageType() const override;
};


#endif //PROJECT_2_ERROR_MESSAGE_H
