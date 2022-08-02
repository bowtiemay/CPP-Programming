	// FILENAME: EW_Driver.cpp
	// PROGRAMMER: Maya Cobb
	// DATE: Aug 2 2022
	// COMPILER: VSCode
	// REQUIRED: EnglishWeight.h, EnglishWeight.cpp
	// PURPOSE: gets user entered english weights and displays results of operations
	//			from EnglishWeight.cpp

#include <iostream>
#include "EnglishWeight.cpp"

using namespace std;

int main() {
	int inputPounds1;
	int inputOunces1;

	int inputPounds2;
	int inputOunces2;

	double number;

	cout << "Enter # pounds for weight 1: ";
    cin >> inputPounds1;
	cout << "Enter # ounces for weight 1: ";
    cin >> inputOunces1;

	cout << "Enter # pounds for weight 2: ";
    cin >> inputPounds2;
	cout << "Enter # ounces for weight 2: ";
    cin >> inputOunces2;

	cout << "Enter a number: ";
    cin >> number;

	EnglishWeight w(inputPounds1, inputOunces1, inputPounds2, inputOunces2, number);

	cout << endl;
    cout << "EnglishWeight1 + EnglishWeight2 = " << w.add() << "oz"<< endl;
	cout << "EnglishWeight1 - EnglishWeight2 = " << w.subtract() << "oz" << endl;
	cout << "EnglishWeight1 / EnglishWeight2 = " << w.divide() << "oz" << endl;
	cout << "EnglishWeight1 * number = " << w.multiplyByNumber(1, number) << "oz" << endl;
    cout << "number * EnglishWeight1 = " << w.multiplyByNumber(1, number) << "oz" << endl;
	cout << "Englishweight1 / number = " << w.divideByNumber(1, number) << "oz" << endl;
	cout << "Englishweight1 / number = " << w.divideByNumber(2, number) << "oz" << endl;
	cout << endl;

	return 0;
}