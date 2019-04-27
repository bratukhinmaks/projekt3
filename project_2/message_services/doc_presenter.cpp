#include "doc_presenter.h"

void doc_presenter::process(my_message *_msg) const {
    auto *msg = dynamic_cast<text_message *>(_msg);

    // troche boilerplate kodu i jakiegos lorem ipsum...

    std::cout << "Prezenter dokumentow -> " << msg->getDescription() << endl;
}
