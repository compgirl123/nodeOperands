//
// Created by Claudia Feochari on 2018-04-20.
//

#pragma once
#include "Component.h"
#include <string>

class NumericOperation : public Component
{
public:
    NumericOperation(string name, int number1, int number2, int level);
    NumericOperation(string name, int number1, int level);
    ~NumericOperation();
    long getSize();
    int substract(int input);
    int add();
    int multiply(int input1,int input2);
    int getAdditionNumber1();
    int getAdditionNumber2();

private:
    //Size of the file, in kB
    long size;
    int sum_unary_minus;
    int sum_unary_plus;
    int operation;
    int number1;
};

