#ifndef PROJECT_2_TEST_RUNNER_H
#define PROJECT_2_TEST_RUNNER_H

#include "message_service.h"

class test_runner : public message_service{
public:
    void process(my_message *msg) const override;
};


#endif //PROJECT_2_TEST_RUNNER_H
