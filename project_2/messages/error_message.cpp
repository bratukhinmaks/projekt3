#include "error_message.h"

string error_message::errorDesc[3] = {"maly", "sredni", "duzy"};

string error_message::getDescription() const {
    return "Blad (poziom zagrozenia: " + errorDesc[lvl] + "): " + text;
}

error_message::error_message(const string &text, error_level lvl) : text(text), lvl(lvl) {}

MessageType error_message::getMessageType() const {
    return MessageType::ERROR;
}
