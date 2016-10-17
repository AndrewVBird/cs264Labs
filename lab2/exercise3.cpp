#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
	srand (time(NULL));
	double count;
	cout << "Please input a number of times to role the dice: " <<  endl;
	cin >> count;
	int totals [11]={0,0,0,0,0,0,0,0,0,0,0};
	for(int i=0;i<count;++i){
        	int dieA = rand()%6+1;
        	int dieB = rand()%6+1;
        	int sum = dieA+dieB;
		sum-=2;
		++totals[sum];
	}
	cout << "Value		Percentage" << endl;
	for(int i=2;i<=12;++i){
		int pos = i-2;
		double percent = totals[pos]/count;
		percent*=100;
		cout << "  " << i << "	 	    " << percent << "%"  << endl;  	
	}
}
