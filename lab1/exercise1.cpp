#include <iostream>

using namespace std;

int main(){
int A,B,C;
cin >> A;
cin >> B;
cin >> C;
cout << "Sum: " << A+B+C << endl;
cout << "Average: " << ((A+B+C)/3) << endl;
cout << "Product: " << A*B*C << endl;

int small;
if(A<B && A<C)
{
	small=A;
}
else if(B<A && B<C)
{
	small=B;
}
else
{ 
	small=C;
}

cout << "Smallest: " << small << endl;

int large;
if(A>B && A>C)
{
        large=A;
}
else if(B>A && B>C)
{
        large=B;
}
else 
{
        large=C;
}

cout << "Largest: " << large << endl;
}
