//
// Created by MacBook Pro on 2019-03-20.
//

#ifndef PROJECT_2_COMPLEX_H
#define PROJECT_2_COMPLEX_H
using namespace std;

#include <iostream>

class complexNumber {
public:
    int RealPart;
    int ImagaryPart;

    complexNumber(int RealPart, int ImagaryPart) {
        this->RealPart = RealPart;
        this->ImagaryPart = ImagaryPart;// konstruktor
    };

    // konstruktor
    complexNumber operator+(const complexNumber &a);

    complexNumber operator-(const complexNumber &a);

    bool operator==(const complexNumber &a);

    bool operator!=(const complexNumber &a);

    complexNumber &operator+=(const complexNumber &a);

    complexNumber &operator-=(const complexNumber &a);

    friend ostream &operator<<(ostream &zespol, const complexNumber &a) {
        return zespol << a.RealPart << "+" << a.ImagaryPart << "i" << endl;
    }
};


#endif //PROJECT_2_COMPLEX_H
