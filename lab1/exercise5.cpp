#include <iostream>
#include <math.h>

using namespace std;

void isPrime(int x){
        bool prime=true;
        if(x<2)
        {
                prime=false;
        }
        else if(x==2)
        {
                prime=true;
        }
        else if(x%2==0)
        {
                prime=false;
        }
        else
        {
                int limit = sqrt(x);
                for(int div = 3;div<=limit;div++)
                {
                        if(x % div == 0)
                                prime = false;
                }
        }
	if(prime) cout << x << ", ";
}


int main(){
	cout << "The prime numbers between 1 and 5000 are:" << endl;
	for(int i=1;i<=5000;i++){
		isPrime(i);
	}
}
