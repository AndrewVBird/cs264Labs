#include <iostream>

using namespace std;

void my_swap(int &A,int &B){
	int store=A;
	A=B;
	B=store;
}

int main(){
	cout << "Please input two numbers: " << endl;
	int A,B;
	cin >> A;
	cin >> B;
	cout << "A contains the value: " << A << endl;
	cout << "B contains the value: " << B << endl;
	my_swap(A,B);
	cout << "A contains the value: " << A << endl;
        cout << "B contains the value: " << B << endl;
}	
