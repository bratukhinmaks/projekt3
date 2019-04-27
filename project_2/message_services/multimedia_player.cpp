#include "multimedia_player.h"

void multimedia_player::process(my_message *_msg) const {
    auto *msg = dynamic_cast<multimedia_message*>(_msg);

    // troche boilerplate kodu i jakiegos lorem ipsum...

    std::cout << "Odtwarzac multimediow -> " <<  msg->getDescription() << endl;
}
