//
// Created by Claudia Feochari on 2018-04-20.
//

#include "NumericOperation.h"
#include <iostream>

NumericOperation ::NumericOperation(string name, int sum_unary_minus,
									int sum_unary_plus, int level) :
		Component(operation,name, level, sum_unary_plus,sum_unary_minus)
{
	//cout << sum_unary_minus+sum_unary_plus;

}
 NumericOperation ::NumericOperation(string name, int sum_unary_minus, int level) :
		Component(operation,name, level,sum_unary_plus,sum_unary_minus)
{
	//cout << sum_unary_minus+sum_unary_plus;

}
//unary operation

NumericOperation::~NumericOperation()
{
}
/*int NumericOperation::getNumber(){

}
 */
int NumericOperation::getAdditionNumber1(){

	return this->getSumUnaryMinus();
}
int NumericOperation::getAdditionNumber2(){
	return this->getSumUnaryPlus();
}

long NumericOperation::getSize() {
	cout << this->getIndentation() << this->getName() << " size: " << size << endl;
	return this->size;
}

int NumericOperation::substract(int input) {
	cout << this->getIndentation() << this->getName() << " size: " << size << endl;
	return this->size;
}

int NumericOperation::multiply(int input1,int input2){

}

int NumericOperation::add(int input1,int input2){
	int sum = input1+input2;
	return sum;
}