#ifndef VECTOR_H
#define VECTOR_H


class Vector {
private:
	double x;
	double y;
public:
	void getAbs();
	void sumVector(Vector vector);
	void diffVector(Vector vector);
	void setValues(double x, double y);
	double get_X();
	double get_Y();
};

#endif