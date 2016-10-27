#include <iostream>
#include "MyComplex.h"

using namespace std;

int main(){
	double real,image;
	
	cout << "Please input complex number A: " << endl;
	cin >> real;
	cin >> image;
	MyComplex A = MyComplex(real,image);
	cout << "A = ";
	A.print();
	
	cout << "Please input complex number B: " << endl;
	cin >> real;
	cin >> image;
	MyComplex B = MyComplex(real,image);
	cout << "B = ";
	B.print();
	
	MyComplex C = MyComplex();
	cout << "C = ";
	C.print();
	
	cout << "Please input complex number C: " << endl;
	cin >> real;
	cin >> image;
	C.setReal(real);
	C.setImage(image);
	cout << "C = " << C.getReal() << " + " << C.getImage() << "i" << endl;
	
	C = A+B;
	cout << "A + B = ";
	C.print();
	C = A*B;
	cout << "A * B = ";
	C.print();
	C = A-B;
	cout << "A - B = ";
	C.print();
}


