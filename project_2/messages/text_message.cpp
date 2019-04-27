#include "text_message.h"

string text_message::getDescription() const {
    return "Wiadomosc tekstowa: " + text;
}

text_message::text_message(const string &text) : text(text) {}

MessageType text_message::getMessageType() const {
    return MessageType::TEXT;
}
