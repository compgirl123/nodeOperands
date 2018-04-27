//
// Created by Claudia Feochari on 2018-04-20.
//

#include "NumericOperation.h"
#include <iostream>


NumericOperation ::NumericOperation(string name, int level,int sum) :
		Component(name, level,sum) {}

NumericOperation ::NumericOperation(string name, int level,vector <double> integers) :
		Component(name, level,integers) {}

NumericOperation ::NumericOperation(string name, int level,int number1, int number2) :
        Component(name, level,number1,number2) {}

NumericOperation::~NumericOperation()
{
}

int NumericOperation::getAdditionNumber1(){
    return this->getIntegerOne();
}

int NumericOperation::getAdditionNumber2(){
	return this->getIntegerTwo();
}

vector <double> NumericOperation::getVector(){
    return this->getVectorNumbers();
}

int NumericOperation::getSum(){
	return this->getSumUnaryPlus();
}


long NumericOperation::getOutput() {

    if(this->getName() == "-" ) {
        cout << this->getLevel() << "  "
             << this->getName() << " : "
             << getSum();
        cout << endl;
    }
    else if(this->getName() == "+") {
        if(this->getLevel() > 2) {
            cout << this->getLevel() << "  "
                 << this->getName() << " : ";
            for(int x=1;x<(this->getVector()).size();x++) {
                cout << this->getVector()[x] << " " ;
            }
            cout << endl;
        }
        else {
            cout << this->getLevel() << "  "
                 << this->getName() << " : "
                 << this->getSumUnaryPlus()// get function from component header
                 << endl;
        }

    }
    else if(this->getName() == "*") {
        cout << this->getLevel() << "  "
             << this->getName() <<  " : "<< this->getSumUnaryPlus() << endl;
    }
}


int NumericOperation::add(){
    vector <double> sum = this->getVectorNumbers();
    int suma = 0;

    for(int x=1;x<sum.size();x++) {
        suma += sum.at(x);
    }

	return suma;
}

int NumericOperation::subtraction(int input) {
    int sub = 0;
    if(input > 0) {
        sub = -1 * input;
    }
    else {
        sub = input;
    }

    return sub;
}

int NumericOperation::multiply(int input1, int input2){
    return input1*input2;
}