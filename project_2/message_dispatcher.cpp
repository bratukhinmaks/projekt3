#include "message_dispatcher.h"

message_dispatcher::message_dispatcher(fifo<my_message> *messages) : messages(messages) {
    messageServices[MessageType::TEST] = new test_runner();
    messageServices[MessageType::TEXT] = new doc_presenter();
    messageServices[MessageType::ERROR] = new error_presenter();
    messageServices[MessageType::MULTIMEDIA] = new multimedia_player();
}

void message_dispatcher::dispatch_message() {
    my_message *const msg = messages->pop();

    if (msg == nullptr) {
        return; //zignoruj
    }

    messageServices[msg->getMessageType()]->process(msg);
}

message_dispatcher::~message_dispatcher() {
    for (int i = 0; i < 4; ++i) {
        delete messageServices[i];
    }
}
