#ifndef PROJECT_2_TEXT_MESSAGE_H
#define PROJECT_2_TEXT_MESSAGE_H


#include "my_message.h"

class text_message: public my_message {
private:
    string text;


public:
    text_message(const string &text);

    string getDescription() const override;

    MessageType getMessageType() const override;
};


#endif //PROJECT_2_TEXT_MESSAGE_H
