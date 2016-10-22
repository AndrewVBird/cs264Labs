#include <iostream>

using namespace std;

struct person{
	string name;
	int age;
};


int main(){

	int numPpl;
	cout << "Please enter the number of people: " << endl;
	cin >> numPpl;
	
	person persons[numPpl];
	
	for(int i=0;i<numPpl;++i){
		cout << "Please enter the name for person number " << i+1 << endl;
		cin >> persons[i].name;
		cout << "Please enter the age for person number " << i+1 << endl;
		cin >> persons[i].age;
	}
	
	cout << "Person" << endl;
	
	for(int i=numPpl-1;i>=0;--i){
		cout << "   " << i+1 << "      " << persons[i].name << " aged " << persons[i].age << endl;
	}
}	
