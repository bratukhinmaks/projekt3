//
// Created by MacBook Pro on 2019-03-20.
//

#ifndef PROJECT_2_FIFO_H
#define PROJECT_2_FIFO_H

#include "complex.h"

template<class T>
struct node {
    T *value;
    node *next;

    node(T *value) : value(value), next(nullptr) {}
};

template<class T>
class fifo {
private:
    int size;
    node<T> *first;  // wskaźnik na początek listy

public:
    void addValue(T *value);

    void deleteNumber(int nr);

    void showFifo();

    T* pop();

    fifo();

    ~fifo();
};

#endif //PROJECT_2_FIFO_H
