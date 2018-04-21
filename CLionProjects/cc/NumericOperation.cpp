//
// Created by Claudia Feochari on 2018-04-20.
//

#include "NumericOperation.h"
#include <iostream>

NumericOperation ::NumericOperation(string name, int sum_unary_minus,
									int sum_unary_plus, int level, int multiplication) :
		Component(name, level, sum_unary_plus,sum_unary_minus, multiplication) {}

NumericOperation ::NumericOperation(string name, int level,int sum) :
		Component(name, level,sum) {}

NumericOperation ::NumericOperation(string name, int level,int integer1, int integer2) :
		Component(name, level,integer1, integer2) {}

NumericOperation::~NumericOperation()
{
}

int NumericOperation::getAdditionNumber1(){

	return this->getIntegerOne();
}
int NumericOperation::getAdditionNumber2(){
	return this->getIntegerTwo();
}


long NumericOperation::getSize() {
	cout << this->getIndentation() << this->getName() << " size: " << size << endl;
	return this->size;
}


int NumericOperation::add(){
	int sum = this->getAdditionNumber1()+this->getAdditionNumber2();
	return sum;
}

int NumericOperation::substract(int input) {
    /*int sum = this->getAdditionNumber1()+this->getAdditionNumber2();
    return sum;*/
}

int NumericOperation::multiply(int input1, int input2){
    return input1*input2;
}