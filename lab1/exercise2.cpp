#include <iostream>

using namespace std;

int main(){
	int A,B;
	cin >> A;
	cin >> B;
	if(A%B==0)
	{
		cout << A << " is a multiple of " << B << endl;
	}
	else
	{
		cout << A << " is not a multiple of " << B << endl;
	}
}
