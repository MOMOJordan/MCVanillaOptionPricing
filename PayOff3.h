//
// Created by Jordan MOMO JUPOU on 17/02/2024.
//

#ifndef CFINANCE_PAYOFF2_H
#define CFINANCE_PAYOFF2_H


class PayOff{
public:
    PayOff(){}
    virtual double operator()(double) const=0;
    virtual ~PayOff(){};
    virtual PayOff* clone() const=0;
};

class PayOffCall:public PayOff{
    double strike;
public:
    PayOffCall(double);
    virtual double operator()(double) const;
    virtual ~PayOffCall(){};
    virtual PayOff* clone() const;
};

class PayOffPut:public PayOff{
    double strike;
public:
    PayOffPut(double);
    virtual double operator()(double) const;
    virtual ~PayOffPut(){};
    virtual PayOff* clone() const;
};

#endif //CFINANCE_PAYOFF2_H