#include <iostream>
#include <cstring>

using namespace std;

void print_string_array(char str[]){
	int i=0;
	while(true){
		if(str[i]=='\0'){
			cout << endl;
			return;
		}
		else{
			cout << str[i];	
			++i;
		}
	}
}

void print_string_ptr(char *str){
	while(true){
                if(*str=='\0'){
                        cout << endl;
                        return;
                }
                else{
                        cout << *str;
                        ++str;
                }
        }
}

int main(){
	char str [] = "testarray";
	print_string_array(str);
	char *str1 = "testptr";
	print_string_ptr(str1);
}
