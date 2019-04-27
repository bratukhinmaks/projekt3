#include "test_runner.h"

void test_runner::process(my_message *_msg) const {
    auto *msg = dynamic_cast<test_message *>(_msg);

    // troche boilerplate kodu i jakiegos lorem ipsum...

    std::cout << "Tester -> " <<  msg->getDescription() << endl;
}
