//
// Created by Jordan MOMO JUPOU on 22/02/2024.
//

#ifndef CFINANCE_SIMPLEMONTECARLO_H
#define CFINANCE_SIMPLEMONTECARLO_H


#include <iostream>
#include <iostream>
#include <cmath>
#include <random>
#include "Random1.h"
#include "PayoffCallE.h"
#include "VanillaOption.h"
#include "DoubleDigital.h"

double SimpleMonteCarlo1(double T,
                         double K,
                         double S_0,
                         double sigma,
                         double r,
                         int N)
{
    double forward=S_0* exp(r-0.5*(sigma*sigma)*T);
    double value=0;
    for (int i=0;i<N;i++){
        double S_T=forward*exp(sigma* sqrt(T)* GaussByBoxMuller()); //   GaussByBoxMuller() distribution(generator)
        value+=PayoffCallE(S_T,K);
    }
    return value/N;
}

double SimpleMonteCarlo2(double T,
                         double S_0,
                         double sigma,
                         double r,
                         int N,
                         PayOff &payoff)
{
    double forward=S_0* exp(r-0.5*(sigma*sigma)*T);
    double value=0;
    for (int i=0;i<N;i++){
        double S_T=forward*exp(sigma* sqrt(T)* GaussByBoxMuller()); //   GaussByBoxMuller() distribution(generator)
        value+=payoff(S_T);
    }
    return exp(-r*T)*value/N;
}

double SimpleMonteCarlo3(
        double S_0,
        double sigma,
        double r,
        int N,
        VanillaOption &vanilla)
{
    double T=vanilla.get_expiry();
    double forward=S_0* exp(r-0.5*(sigma*sigma)*T);
    double value=0;
    for (int i=0;i<N;i++){
        double S_T=forward*exp(sigma* sqrt(T)* GaussByBoxMuller()); //   GaussByBoxMuller() distribution(generator)
        value+=vanilla(S_T);
    }
    return exp(-r*T)*value/N;
}

#endif //CFINANCE_SIMPLEMONTECARLO_H
