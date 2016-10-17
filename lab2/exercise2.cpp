#include <iostream>

using namespace std;

int gcd(int a, int b){
	if(a == 0 || b == 0) return a+b;
	return gcd(b,a%b);
}

int main(){
	cout << "Please enter two numbers: " << endl;
	int A,B;
	cin >> A;
	cin >> B;
	cout << "You have entered " << A << " and " << B << endl;
	int GCD = gcd(A,B);
	cout << "The greatest common divisor of these numbers is: " << GCD << endl;
}
