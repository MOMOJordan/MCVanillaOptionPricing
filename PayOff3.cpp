//
// Created by Jordan MOMO JUPOU on 20/02/2024.
//

#include <iostream>
#include <iostream>
#include <cmath>
#include <random>
#include "PayOff3.h"

double PayOffCall::operator()(double spot) const {
    return (spot>strike)?spot-strike:0.0;
}

double PayOffPut::operator()(double spot) const {
    return (spot<strike)?-spot+strike:0.0;
}

PayOffPut::PayOffPut(double strike):strike(strike){}

PayOffCall::PayOffCall(double strike):strike(strike){}

PayOff *PayOffCall::clone() const {
    return new PayOffCall(*this);
}

PayOff *PayOffPut::clone() const {
    return new PayOffPut(*this);
}
