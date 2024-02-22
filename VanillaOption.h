//
// Created by Jordan MOMO JUPOU on 20/02/2024.
//

#ifndef CFINANCE_VANILLAOPTION_H
#define CFINANCE_VANILLAOPTION_H
#include "PayOff3.h"

class VanillaOption {
    double expiry;

public:
    PayOff* payoffptr;
    VanillaOption(double,PayOff &);
    VanillaOption(const VanillaOption &);
    VanillaOption& operator=(const VanillaOption &);
    double operator()(double) const;
    double get_expiry() const;
    ~VanillaOption();
};


#endif //CFINANCE_VANILLAOPTION_H
