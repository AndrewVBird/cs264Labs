#include <iostream>
#include <string>

using namespace std;

struct customer{
	string name;
	customer *next;
};

customer *create_list(string name);
void insert_name(customer* head, string name);
int list_length(customer* head);
void print_customers(customer *head);