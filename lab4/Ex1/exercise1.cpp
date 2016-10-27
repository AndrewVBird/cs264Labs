#include <iostream>
#include <cstdlib>
#include <ctime>
#include "die.h"

using namespace std;

int main(){
	srand (time(NULL));
	double count;
	cout << "Please input a number of times to role the dice: " <<  endl;
	cin >> count;
	cout << "Please input a number of sides for die A: " << endl;
	int sides;
	cin >> sides;
	die dieA(sides);
	cout << "Please input a number of sides for die B: " << endl;
	cin >> sides;
	die dieB(sides);
	int size = dieA.getNumsides()+dieB.getNumsides()-1;
	int totals [size];
	for(int i=0;i<size;++i){
		totals[i]=0;
	}
	for(int i=0;i<count;++i){
        	dieA.setValue(dieA.roll());
		dieB.setValue(dieB.roll());
        	int sum = dieA.getValue()+dieB.getValue()-2;
		++totals[sum];
	}
	cout << "Value		Percentage" << endl;
	for(int i=2;i<=size+1;++i){
		int pos = i-2;
		double percent = totals[pos]/count;
		percent*=100;
		cout << "  " << i << "	 	    " << percent << "%"  << endl;  	
	}
}
