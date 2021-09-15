#include <iostream>
using namespace std;

int main()
{
	int x1, x2, x3, x4; //basic inputting of the values
	cout << "Input the values for the first line" << endl;
	cin >> x1 >> x2;
	cout << "Line 1:(" << x1 << "," << x2 << ")" << endl;

	cout << "Input the values for the first line" << endl;
	cin >> x3 >> x4;
	cout << "Line 2:(" << x3 << "," << x4 << ")" << endl;

	if (x1 <= x3 && x3 <= x2) { //checks to see if the x3 cordinate overlaps with the first line
		cout << "The lines overlap (inside frist)" << endl; //wont display unless it finds overlap
	}

	else if (x1 <= x4 && x4 <= x2) { //checks to see if the x4 cordinate overlaps with the first line
		cout << "The lines overlap (inside second)" << endl;
	}

	else if (x3 < x1 && x2 < x4) { //if the second line completely overlaps the first
		cout << "The lines overlap (bigger)" << endl;
	}

	else //if the program doesn't find any overlap
		cout << "There is no overlap" << endl;

}