#ifndef PROJECT_2_MULTIMEDIA_MESSAGE_H
#define PROJECT_2_MULTIMEDIA_MESSAGE_H


#include "my_message.h"

enum multimedia_type {
    IMAGE = 0, SOUND = 1, VIDEO = 2
};

class multimedia_message : public my_message {
    static string multimediaDesc[3];

    multimedia_type multimediaType;
    long long sizeInBytes;
    string path;

public:
    multimedia_message(multimedia_type multimediaType, long long int sizeInBytes, const string &path);

    string getDescription() const override;

    MessageType getMessageType() const override;
};


#endif //PROJECT_2_MULTIMEDIA_MESSAGE_H
