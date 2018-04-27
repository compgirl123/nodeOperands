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


long NumericOperation::getSize() {

    if(this->getName() == "-" ) {
        if(this->getLevel() > 2) {
            cout << this->getLevel() << "  "
                 << this->getName() << " : "
                 << this->getSumUnaryMinus();
            cout << endl;
        }
        else {
            cout << this->getLevel() << "  "
                 << this->getName() << " : "
                 << this->getSumUnaryPlus()// get function from component header
                 << endl;
        }
        /*if(this->getIntegerOne()!=0 ||this->getIntegerTwo() !=0) {
            cout << this->getLevel() << "  "
                 << this->getName() << " : "
                 << getSumUnaryMinus() << " , "
                 << this->getIntegerTwo()<< endl;
        }
        else{
           cout << this->getLevel() << "  "
                << this->getName()<< " : "
               << this->add()
                   << endl;
                 //<<this->getSumUnaryPlus()

        }*/
    }
    else if(this->getName() == "+") {

        if(this->getLevel() > 2) {
            cout << this->getLevel() << "  "
                 << this->getName() << " : ";
            for(int x=0;x<(this->getVector()).size();x++) {
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

        /*if(this->getIntegerOne()!=0 ||this->getIntegerTwo() !=0) {

            cout << this->getLevel() << "  "
                 << this->getName() << " : "
                 << endl;
                 //<< this->getIntegerOne() << " , "
                 //<< this->getIntegerTwo()<< endl;
        } else{
            cout << this->getLevel() << "  "
                 << this->getName() << " : "
                    << this->add()
                 //<< this->getSumUnaryPlus()
                 << endl;
        }*/
    }
    else if(this->getName() == "*") {
        cout << this->getLevel() << "  "
             << this->getName() <<  " : "<< this->getSumUnaryPlus() << endl;
    }
}


int NumericOperation::add(){
	//int sum = this->getAdditionNumber1()+this->getAdditionNumber2();
    vector <double> sum = this->getVectorNumbers();

    int suma = 0;

    for(int x=0;x<sum.size();x++) {
        suma += sum.at(x);
    }

	return suma;
}

int NumericOperation::substract(int input) {
    /*int sum = this->getAdditionNumber1()+this->getAdditionNumber2();
    return sum;*/
}

int NumericOperation::multiply(int input1, int input2){
    return input1*input2;
}