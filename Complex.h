    
#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {
private:
	double real;
	double imag;
public:
	void setData(double real, double imag);
	void getAbs();
	void printComplex();
};
#endi