#include "Class.h"
using namespace std;

int Child::getAge() {
    return this->age;
}
string Child::getSurName() {
    return this->surname;
}
string Child::getName() {
    return this->name;
}
void Child::setAge(int age) {
    this->age = age;
}
void Child::setLastName(string surname) {
    this->surname = surname;
}
void Child::setName(string name) {
    this->name = name;
}

void Tiles::getData() {
    cout << "brand: "<< this->brand << ", " << "width: "<< this->size_w << ", " << "height: " << this->size_h << ", " << "price:" <<this->price << endl;
}

void Complex::printComplex() {
    if(this->im >= 0) cout << this->real <<"+"<<this->imag << "i" << endl;
    else cout << this->real <<"-"<<this->imag << "i" << endl;
}

void Complex::getAbs() {
    cout << "The Abs = "<<sqrt(this->real*this->real + this->imag*this->imag);
}

void Complex::setData(double real , double imag){
    this->real = real;
    this->imag = imag;
}

void Vector::setValues(double x, double y) {
    this->x = x;
    this->y = y;
}

double Vector::get_X() {
    return this->x;
}

double Vector::get_Y() {
    return this->y;
}

void Vector::getAbs() {
    cout << "The Abs = "<<sqrt(this->x*this->x + this->y*this->y);
}

void Vector::sumVector(Vector vector) {
    this->x += vector.get_X();
    this->y += vector.get_Y();
}

void Vector::diffVector(Vector vector) {
    this->x -= vector.get_X();
    this->y -= vector.get_Y();
}