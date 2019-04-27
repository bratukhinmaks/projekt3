#ifndef PROJECT_2_MESSAGE_SERVICE_H
#define PROJECT_2_MESSAGE_SERVICE_H


#include <iostream>
#include "../messages/my_messages.h"

class message_service {
public:
    virtual void process(my_message *msg) const = 0;
};


#endif //PROJECT_2_MESSAGE_SERVICE_H
