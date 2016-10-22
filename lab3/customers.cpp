#include <iostream>
#include <string>
#include "customers.h"

using namespace std;

customer *create_list(string name){
	customer *newCust = new customer;
	newCust->name=name;
	newCust->next=NULL;
	return newCust;
}

void insert_name(customer* head, string name){
	customer *newCust = new customer;
	newCust->name=name;
	newCust->next=NULL;
	customer *cur = head;
	while(cur->next!=NULL){
		cur = cur->next;
	}
	cur->next=newCust;
}

int list_length(customer* head){
	customer *cur = head;
	int count=0;
	while(cur != NULL){
		++count;
		cur = cur ->next;
	}
	return count;
}

void print_customers(customer *head){
	customer *cur = head;
	while(cur != NULL){
		cout << cur->name << endl;
		cur = cur ->next;
	}
}
