#ifndef PROJECT_2_MESSAGE_DISPATCHER_H
#define PROJECT_2_MESSAGE_DISPATCHER_H

#import "fifo.h"
#import "fifo.cpp"
#import "messages/my_messages.h"
#import "message_services/message_services.h"

using namespace std;

class message_dispatcher {
    fifo<my_message> *messages;
    message_service* messageServices[4];

public:
    message_dispatcher(fifo<my_message> *messages);

    void dispatch_message();

    virtual ~message_dispatcher();
};


#endif //PROJECT_2_MESSAGE_DISPATCHER_H
