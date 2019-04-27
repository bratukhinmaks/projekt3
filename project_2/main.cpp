//
// Created by MacBook Pro on 2019-03-11.
//

#include <iostream>
#include <time.h>
#include <string>
#include <cstdlib>
#include "complex.h"
#include "fifo.h"
#include "fifo.cpp"
#include "messages/my_messages.h"
#include "message_dispatcher.h"
#include "message_producer.h"
#include "messages/my_messages.h"
#include <chrono>
#include <thread>

void complexNumberTest();

void messagesTest();

void producerDispatcherMessagesTest();

using namespace std;

int main() {
    complexNumberTest();
    messagesTest();
    //producerDispatcherMessagesTest();
    return 0;
}

void producerDispatcherMessagesTest() {
    srand(time(nullptr));
    auto *messagesFifo = new fifo<my_message>();
    auto *const producer = new message_producer(messagesFifo);
    auto *const dispatcher = new message_dispatcher(messagesFifo);


    for (int i = 0; i < 100; ++i) {
        if ((rand() % 2) == 1) {
//            cout << "producer" << endl;
            producer->produce_message();
        }
        else {
//            cout << "dispatcher" << endl;
            dispatcher->dispatch_message();
        }
        this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    cout << "\n--------------------------\npozostalo na kolejce:\n\n" << endl;
    messagesFifo->showFifo();
    delete messagesFifo;

}

void messagesTest() {
    auto *messagesFifo = new fifo<my_message>();

    messagesFifo->addValue(new text_message("Jakas wiadomosc"));
    messagesFifo->addValue(new error_message("Jakis blad", error_level::MEDIUM));
    messagesFifo->addValue(new test_message(4, "Jakis test"));
    messagesFifo->addValue(
            new multimedia_message(multimedia_type::SOUND, 4523527082, "C://documents/sounds/lilskies.mp3"));
    messagesFifo->addValue(
            new multimedia_message(multimedia_type::VIDEO, 1123543743, "C://documents/video/vidio.mp4"));
    messagesFifo->addValue(
            new multimedia_message(multimedia_type::IMAGE, 3942301232, "C://documents/image/image.jpeg"));
    messagesFifo->showFifo();
    delete messagesFifo;
}

void complexNumberTest() {
    auto *baza = new fifo<complexNumber>();
    baza->addValue(new complexNumber(12, 14));
    baza->addValue(new complexNumber(4, 5));
    baza->addValue(new complexNumber(13, 16));
    baza->addValue(new complexNumber(4, 9));
    baza->addValue(new complexNumber(1, 2));
    baza->addValue(new complexNumber(21, -3));


    baza->showFifo();

    cout << "-----------" << endl;

    baza->deleteNumber(3);
    baza->deleteNumber(5);
    baza->deleteNumber(1);

    baza->showFifo();

    delete (baza);

    auto *s1 = new complexNumber(2, 5);
    auto *s2 = new complexNumber(14, 9);
    auto *s3 = new complexNumber(0, 0);
    *s3 = *s2 + *s1;
    cout << "-----------" << endl;
    cout << *s3 << endl;
    if (*s2 == *s1) {
        cout << "the same value" << endl;
    }
    if (*s2 != *s1) {
        cout << "different value" << endl;
    }

    cout << "-----------" << endl;
    cout << *s2 << endl;
}

