#include "multimedia_message.h"

string multimedia_message::multimediaDesc[3] = {"obraz", "dzwiek", "video"};

multimedia_message::multimedia_message(multimedia_type multimediaType, long long int sizeInBytes, const string &path)
        : multimediaType(multimediaType), sizeInBytes(sizeInBytes), path(path) {}

string multimedia_message::getDescription() const {
    return "Plik multimedialny - " + multimediaDesc[multimediaType] +
           ":\n\tRozmiar: " + to_string(sizeInBytes) + " bajtow\n\tSciezka do pliku: " + path;
}

MessageType multimedia_message::getMessageType() const {
    return MessageType::MULTIMEDIA;
}
