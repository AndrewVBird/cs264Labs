#include <iostream>

using namespace std;

class die {
	public:
	die(int sides);
	int roll();
	void setValue(int value);
	int getValue();
	int getNumsides();

	private:
	int sides;
	int value;
};
