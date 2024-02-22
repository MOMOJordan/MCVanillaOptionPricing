//
// Created by Jordan MOMO JUPOU on 20/02/2024.
//
#include <iostream>
#include "VanillaOption.h"

using namespace std;

VanillaOption::VanillaOption(double expiry,PayOff & payoff):expiry(expiry) {
    payoffptr=payoff.clone();
}

VanillaOption::VanillaOption(const VanillaOption & original) {
    cout<<"je pass"<<endl;
    expiry=original.get_expiry();
    payoffptr=original.payoffptr->clone();
}

VanillaOption& VanillaOption::operator=(const VanillaOption& original) {
    if (this!=&original){
        expiry=original.get_expiry();
        delete payoffptr;
        PayOff* payoffptr=original.payoffptr->clone();
    }
    return *this;
}

double VanillaOption::operator()(double spot) const {
    return (*payoffptr)(spot);
}

double VanillaOption::get_expiry() const {
    return expiry;
}

VanillaOption::~VanillaOption(){
    delete payoffptr;
}