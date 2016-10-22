#include <iostream>

using namespace std;

int main(){
	int A;
	cin >> A;
	int digits [5];

	for(int i=4;i>=0;--i){
		digits[i]=(A%10);
		A=A/10;
        }

	for(int i=0;i<5;++i){
		cout << digits[i] << "   " ;
	}
}
