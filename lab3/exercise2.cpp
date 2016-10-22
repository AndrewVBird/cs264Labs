#include <iostream>
#include <cstring>

using namespace std;

int main(){
	const int length = 10;
	int curLength=length;
	double *numbers =new double[length];
	cout << "Please enter in your sequence:" << endl;
	double current;
	int pos=0;
	cin >> current;
	while(current!=-1){
		if(pos>=curLength){
			//cout << "Pos: " << pos;
			curLength+=length;
			double *temp =new double[curLength];
			//cout << "testing: " << sizeof(double) *(curLength-length) << endl;
			memcpy ( temp, numbers, sizeof(double) *(curLength-length) );
			//cout << "New Length: " << curLength << endl;
			numbers=temp;
		}
		numbers[pos]=current;
		++pos;
		cin >> current;
	}
	//cout << pos << endl;	
	for(int i=pos-1;i>=0;--i){
		cout << numbers[i] << "  ";
	}
	cout << endl;
}
