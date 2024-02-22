//
// Created by Jordan MOMO JUPOU on 17/02/2024.
//

#ifndef CFINANCE_DOUBLEDIGITAL_H
#define CFINANCE_DOUBLEDIGITAL_H

#include "PayOff3.h"


class DoubleDigital:public PayOff {
    double lower_barrier;
    double upper_barrier;
public:
    DoubleDigital(double,double);
    double virtual operator()(double) const;
    ~DoubleDigital(){};
    virtual PayOff* clone() const;
};


#endif //CFINANCE_DOUBLEDIGITAL_H
