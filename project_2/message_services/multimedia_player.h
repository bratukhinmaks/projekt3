#ifndef PROJECT_2_MULTIMEDIA_PLAYER_H
#define PROJECT_2_MULTIMEDIA_PLAYER_H


#include "message_service.h"

class multimedia_player: public message_service {
public:
    void process(my_message *msg) const override;
};


#endif //PROJECT_2_MULTIMEDIA_PLAYER_H
