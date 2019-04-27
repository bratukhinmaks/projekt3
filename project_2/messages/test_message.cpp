#include "test_message.h"

string test_message::getDescription() const {
    return "Test #" + to_string(number) + ": " + text;
}

test_message::test_message(int number, const string &text) : number(number), text(text) {}

MessageType test_message::getMessageType() const {
    return MessageType::TEST;
}
