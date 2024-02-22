//
// Created by Jordan MOMO JUPOU on 16/02/2024.
//
#include <iostream>
#include <iostream>
#include <cmath>
#include "Random1.h"


using namespace std;

double GaussByBoxMuller(){
    double r_square;
    double x,y;
    do {
        x = 2.0 * rand() / static_cast<double>(RAND_MAX) - 1.0;
        y = 2.0 * rand() / static_cast<double>(RAND_MAX) - 1.0;
        r_square = x * x + y * y;
    }
    while(r_square>1);

    double gaussian_0_1=sqrt(-2* log(r_square)/r_square)*x;
    return gaussian_0_1;
}