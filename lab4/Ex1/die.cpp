#include <iostream>
#include <cstdlib>
#include <ctime>
#include "die.h"

using namespace std;

die::die(int numsides){
	if(numsides<4){
		sides=6;
		cout << "Number of sides too small, setting sides to six." << endl;
	}
	else{
		sides=numsides;
	}
}

int die::roll(){
	return (rand()%sides+1);
}

void die::setValue(int newvalue){
	value = newvalue;
}

int die::getValue(){
	return value;
}

int die::getNumsides(){
	return sides;
}
