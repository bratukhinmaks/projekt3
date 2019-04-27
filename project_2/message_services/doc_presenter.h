#ifndef PROJECT_2_DOC_PRESENTER_H
#define PROJECT_2_DOC_PRESENTER_H


#include "message_service.h"

class doc_presenter : public message_service{
public:
    void process(my_message *msg) const override;
};


#endif //PROJECT_2_DOC_PRESENTER_H
