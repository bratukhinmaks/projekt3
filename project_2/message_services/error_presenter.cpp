#include "error_presenter.h"

void error_presenter::process(my_message *_msg) const {
    auto *msg = dynamic_cast<error_message *>(_msg);

    // troche boilerplate kodu i jakiegos lorem ipsum...

    std::cout << "Prezenter bledow -> " <<  msg->getDescription() << endl;
}
