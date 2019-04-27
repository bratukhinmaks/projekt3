#ifndef PROJECT_2_MESSAGE_PRODUCER_H
#define PROJECT_2_MESSAGE_PRODUCER_H

#import "fifo.h"
#import "fifo.cpp"
#import "messages/my_messages.h"
#include <time.h>
using namespace std;

class message_producer {
    fifo<my_message> *messages;

public:
    message_producer(fifo<my_message> *messages);

    void produce_message();
};


#endif //PROJECT_2_MESSAGE_PRODUCER_H
