#include <iostream>
#include <cstring>

using namespace std;

int my_string_len(char str[]){
	char current;
	int i=0;
	do{
		current = str[i];
		++i;
	}
	while(current!='\0');
	return i-1;
}

void my_string_cat(char dest[], char src[], int dest_size){
	int A = my_string_len(dest);
	int B = my_string_len(src);
	if((A+B)<dest_size){
		for(int i=0,j=A;i<B;++i,++j){
			dest[j]=src[i];
		}
	}
	else{
		cout << "The source string does not fit in the destination string." << endl;
	}
}

int main(){
	char store[]="testing";
	int length = my_string_len(store);
	cout << length << endl;
	char dest[20]="temp";
	char src[]="word that is far too long to fit in the other one";
	cout << dest << endl;
	my_string_cat(dest,src,20);
	cout << dest << endl;
}
