#include <iostream>
#include "Class.h"
int main() {
    int age1, age2;
    string name1 , name2, surname1, surname2;
    double real , imag , x1, x2 , y1 ,y2;


    Child child1, child2;
    Tiles tiles1, tiles2;
    Vector vector1, vector2;
    Complex complex1;

    cout << "Enter the first child data:" ;
    cin >> name1 >> surname1 >> age1;
    child1.setName(name1);
    child1.setLastName(surname1);
    child1.setAge(age1);
    cout << endl;
    cout << "Name is " << child1.getName() << ", Surname is " << child1.getLastName() << ", Age is " << child1.getAge() << endl;

    cout << "Enter the second child data:" ;
    cin >> name2 >> surname2 >> age2;
    child2.setName(name2);
    child2.setLastName(surname2);
    child2.setAge(age2);
    cout << endl;
    cout << "Name is " << child2.getName() << ", Last Name is " << child2.getLastName() << ", Age is " << child2.getAge()<<endl;

    cout << "Enter the first Tiles data: ";
    cin >> tiles1.brand >> tiles1.size_h >> tiles1.size_w >> tiles1.price;
    tiles1.getData();

    cout << "Enter the second Tiles data: ";
    cin >> tiles2.brand >> tiles2.size_h >> tiles2.size_w >> tiles2.price;
    tiles2.getData();

    cout << "Enter the Complex number: ";
    cin >> real >> imag;
    complex1.setData(real, imag);
    complex1.printComplex();
    complex1.getAbs();

    cout << "Enter the first vector: ";
    cin >> x1 >> y1;
    vector1.setValues(x1 , y1);

    cout << endl;

    cout << "Enter the second vector: ";
    cin >> x2 >> y2 ;
    vector2.setValues(x2 , y2);
    cout << endl;

    vector1.getAbs();
    vector2.getAbs();

    cout << endl;
    vector1.sumVector(vector2);
    cout << "The sum is" << vector1.get_X() <<" "<< vector1.get_Y();




    return 0;
}