#include <iostream>
using namespace std;

int main()
{
	float num1, num2; //initializing the inputted variables
	cout << "Enter the first Number:" << endl;
	cin >> num1;
	//Getting the numbers unputted by the user
	cout << "Enter the second Number:" << endl;
	cin >> num2;

	if (num1 < num2) {
		cout << num1 << " is less than " << num2 <<endl;
	}

	if (num1 > num2) {
		cout << num1 << " is greater than " << num2 << endl;
	}

	else
		cout << num1 << " and " << num2 << " are equal" << endl;
}
