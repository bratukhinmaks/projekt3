#ifndef PROJECT_2_TEST_MESSAGE_H
#define PROJECT_2_TEST_MESSAGE_H


#include "my_message.h"

class test_message : public my_message {
    int number;
    string text;

public:
    test_message(int number, const string &text);

public:
    string getDescription() const override;

    MessageType getMessageType() const override;
};


#endif //PROJECT_2_TEST_MESSAGE_H
