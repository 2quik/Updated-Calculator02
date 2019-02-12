#include <iostream>
#include <math.h>
#include <string>
using namespace std;

class basicCalculator {
public:
	int add(int add1,int add2) {
		return add1 + add2;
	}

	int multiply(int multiply1,int multiply2) {
		return multiply1 * multiply2;
	}

};

int main() {
	cout << "What mathematical action do you want?" << endl;
	cout << "Press '1' to add two numbers, '2' to multiply two numbers" << endl;
	
	int method;

	cin >> method;

	cout << "Now input the values you want to add or multiply" << endl;

	int value1;
	cin >> value1;

	cout << "Second value: " << endl;

	int value2;
	cin >> value2;

	basicCalculator bc;
	
	switch (method) {
	case 1:
		cout << "The sum is " << bc.add(value1, value2) << endl;
		break;
	case 2:
		cout << "The product is " << bc.multiply(value1, value2) << endl;
		break;
	}

	
}