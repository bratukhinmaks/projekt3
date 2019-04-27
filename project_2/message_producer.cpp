#include "message_producer.h"

message_producer::message_producer(fifo<my_message> *messages) : messages(messages) {
    srand(time(nullptr));
}

void message_producer::produce_message() {
    const int messageType = rand() % 4;
    static int counter = 0;
    counter++;

    switch (messageType) {
        case 0:
            messages->addValue(new text_message("przykladowa wiadomosc " + to_string(counter)));
            break;
        case 1:
            messages->addValue(new error_message("przykladowy blad " + to_string(counter), error_level::LOW));
            break;
        case 2:
            messages->addValue(new test_message(counter, "przykladowy test"));
            break;
        case 3:
            messages->addValue(new multimedia_message(multimedia_type::IMAGE, rand() % 100000, "C://imgs/img" + to_string(counter) + ".png"));
        default:
            break;
    }
}
