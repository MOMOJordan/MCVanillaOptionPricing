//
// Created by Jordan MOMO JUPOU on 17/02/2024.
//

#include "DoubleDigital.h"

DoubleDigital::DoubleDigital(double lower_barrier, double upper_barrier):lower_barrier(lower_barrier),upper_barrier(upper_barrier) {}

double DoubleDigital::operator()(double spot) const {
    return ((lower_barrier<spot)?1.0:0.0)*((spot<upper_barrier)?1.0:0.0);
}

PayOff *DoubleDigital::clone() const{
    return new DoubleDigital(*this);
}