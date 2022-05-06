#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <math.h>
#include <cmath>

using namespace std;

struct Complex {
	double real;
	double imag;
};
void read(Complex& c);
void print(Complex& c);
Complex complexAdd(Complex c1, Complex c2);
Complex complexCreate(int real, int imag);
Complex complexMulzply(Complex c1, Complex c2);
Complex complexSubtract(Complex c1, Complex c2);
Complex complexDivide(Complex c1, Complex c2);
Complex strTocom(string str);
double complexModule(Complex a);
#endif