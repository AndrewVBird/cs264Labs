#include <iostream>
#include "MyComplex.h"

using namespace std;

MyComplex::MyComplex(){
	a=0;
	b=0;
}
MyComplex::MyComplex(double real,double complex){
	a=real;
	b=complex;
}
double MyComplex::getReal(){
	return a;
}
void MyComplex::setReal(double real){
	a=real;
}
double MyComplex::getImage(){
	return b;
}
void MyComplex::setImage(double image){
	b=image;
}
MyComplex MyComplex::Add(const MyComplex &z){
	double real= a + z.a;
	double image= b + z.b;
	MyComplex comp = MyComplex(real,image);
	return comp;
}
MyComplex MyComplex::Subtract(const MyComplex &z){
	double real= a - z.a;
	double image= b - z.b;
	MyComplex comp = MyComplex(real,image);
	return comp;
}
MyComplex MyComplex::Multiply(const MyComplex &z){
	double real= (a * z.a)-(b * z.b);
	double image= (a * z.b)+(b * z.a);
	MyComplex comp = MyComplex(real,image);
	return comp;
}
void MyComplex::print(){
	if(b>=0) cout << a << " + " << b << "i" <<endl;
	else cout << a << " - " << b*(-1) << "i" << endl; 
}
