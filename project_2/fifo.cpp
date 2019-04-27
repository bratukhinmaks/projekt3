//
// Created by MacBook Pro on 2019-03-20.
//

#include <iostream>
#include <string>
#include <cstdlib>
#include "fifo.h"
#include "complex.h"

using namespace std;

template<class T>
fifo<T>::fifo() {
    size = 0;
    first = nullptr;       // konstruktor
}

template<class T>
void fifo<T>::showFifo() {
    // wskaznik na pierszy element listy
    node<T> *temp = first;

    // przewijamy wskazniki na nastepne elementy
    while (temp) {
        cout << *(temp->value);
        temp = temp->next;
    }
}

template<class T>
void fifo<T>::deleteNumber(int nr) {
    if (nr > size) { // jesli chcemy usunac element ktory nie istnieje to zignoruj
        return;
    }

    if (size == 1) {
        node<T> *second = first->next;
        delete first->value;
        delete first;
        first = second; //poczatek listy, 1 el. wskazuje na 2 el. itd..
    }
    else {
        node<T> *prev = first;
        for (int i = 2; i < nr; ++i) {
            prev = prev->next;
        }

        // nastepny zaraz po elemencie ktory chcemy usunac; najwyzej bedzie to nullptr, bo w ostatecznosci
        // element to usuniecia to bedzie ostatni element
        node<T> *next = prev->next->next;

        delete prev->next->value;
        delete prev->next;
        prev->next = next;
    }
    --size;
}

template<class T>
void fifo<T>::addValue(T *value) {
    auto *newer = new node<T>(value); // tworzy nowy element listy

    if (first == nullptr) // sprawdzamy czy to pierwszy element listy
    {
        // jeżeli tak to nowy element jest teraz początkiem listy
        first = newer;
    }
    else {
        // w przeciwnym wypadku wędrujemy na koniec listy
        node<T> *temp = first;

        while (temp->next) {
            temp = temp->next;
        }

        temp->next = newer;
    }
    ++size;
}

template<class T>
fifo<T>::~fifo() {
    size = 0;
    node<T> *temp = first, *next;
    while(temp) {
        next = temp->next;
        delete temp->value;
        delete temp;
        temp = next;
    }
    first = nullptr;
}

template<class T>
T *fifo<T>::pop() {
    if (size == 0) {
        return nullptr;
    }
    --size;

    T *fv = first->value;
    auto next = first->next;
    delete first;
    first = next;

    return fv;
}
