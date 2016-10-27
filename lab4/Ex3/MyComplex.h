#include <iostream>

using namespace std;

class MyComplex{
	public:
	MyComplex();
	MyComplex(double real,double complex);
	double getReal();
	void setReal(double real);
	double getImage();
	void setImage(double image);
	MyComplex operator+(const MyComplex &z);
	MyComplex operator-(const MyComplex &z);
	MyComplex operator*(const MyComplex &z);
	void print();

	private:
	double a;
	double b;
};