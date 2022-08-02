	// FILENAME: EnglishWeight.cpp
	// PROGRAMMER: Maya Cobb
	// DATE: Aug 2 2022
	// COMPILER: VSCode
	// REQUIRED: EnglishWeight.h, EW_Driver.cpp
	// PURPOSE: eng weight class implementation file

#include <stdlib.h>
#include <iostream>
#include "EnglishWeight.h"

using namespace std;

EnglishWeight::EnglishWeight(void) {
    this->initialized = 0;
}

EnglishWeight::EnglishWeight(int _pounds1, int _ounces1, int _pounds2, int _ounces2, double _number) {
    this->initialized = 1;
    this->pounds1 = _pounds1;
    this->ounces1 = _ounces1;
    this->pounds2 = _pounds2;
    this->ounces2 = _ounces2;
    this->number = _number;
    this->totalOunces1 = pounds1 * 16 + ounces1;
    this->totalOunces2 = pounds2 * 16 + ounces2;
}

int EnglishWeight:: add() {
    this->verify_initialization();
    return totalOunces1 + totalOunces2;
}

int EnglishWeight::subtract() {
    this->verify_initialization();
    return totalOunces1 - totalOunces2;
}

double EnglishWeight::divide() {
    this->verify_initialization();
    return (double) totalOunces1 / (double) totalOunces2;
}

double EnglishWeight::multiplyByNumber(int whichEnglishWeight, double number) {
    this->verify_initialization();
    double result;
    if (whichEnglishWeight == 1) {
        result = totalOunces1 * number;
    } else if (whichEnglishWeight == 2) {
        result = totalOunces2 * number;
    }
    return result;
}

double EnglishWeight::divideByNumber(int whichEnglishWeight, double number) {
    this->verify_initialization();
    double result;
    if (whichEnglishWeight == 1) {
        result = totalOunces1 / number;
    } else if (whichEnglishWeight == 2) {
        result = totalOunces2 / number;
    }
    return result;
}

void EnglishWeight::verify_initialization(void) {
    if (initialized) {
       return;
    } else {
       cerr << "*** Attempt to use uninitialized english weight." << endl;
       exit(1);
    }
}
