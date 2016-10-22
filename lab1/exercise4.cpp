#include <iostream>

using namespace std;

int main(){
	int accnum;
	double balance,charged,credits;
	double limit=1000;
	bool done = true;

	 while(done){
		cout << "\nPlease input the customers details:" <<endl;
		cout << "Account number: ";
		cin >> accnum;
		if(accnum==-1)
		{
			done=false;
		}
		else{
	
		cout << "\nStarting balance: ";
		cin >> balance;
		cout << "\nTotal of items charged: ";
		cin >> charged;
		cout << "\nTotal of credits applied: ";
		cin >> credits;

		double newBal = balance+charged-credits;

		if(newBal>limit)
		{
			cout << "\nAccount number: " << accnum << "\nCredit limit: " << limit << "\nCurrent balance: " << newBal << "\nCredit limit exceeded" << endl; 
		}
		}
	}
}
