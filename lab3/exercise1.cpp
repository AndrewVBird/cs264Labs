#include <iostream>
using namespace std;

int main(){
	int length;
	cout << "Please enter in the length of your sequence:" << endl;
	cin >> length;
	double numbers [length];
	cout << "Please enter in your sequence:" << endl;
	for(int i=0;i<length;++i){
		cin >> numbers[i];
	}
	for(int i=length-1;i>=0;--i){
		cout << numbers[i] << "  ";
	}
	cout << endl;
}
