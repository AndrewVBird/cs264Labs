#include <iostream>
#include <string>
#include "customers.h"

using namespace std;

int main(){
        cout << "Please input a customer name: " << endl;
	string name;
	cin >> name;
	if(name=="end"){}
	else{
		customer *customer1 = create_list(name);
		while(true){
			cout << "Please input a customer name: " << endl;
			cin >> name;
			if(name=="end"){break;}
			insert_name(customer1,name);
		}
		int length = list_length(customer1);
		cout << "You entered " << length << " customer(s)." << endl;
		print_customers(customer1);
	}
}

