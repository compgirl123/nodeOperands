//
// Created by Claudia Feochari on 2018-04-20.
//

#pragma once
#include "Component.h"
#include <string>
#include <vector>

class NumericOperation : public Component
{
public:
    NumericOperation(string name, int number1, int number2, int level);
    NumericOperation(string name, int level,vector <double> integers);
    NumericOperation(string name, int level,int sum);
    ~NumericOperation();

    long getOutput();
    int subtraction(int input);
    int add();
    int multiply(int input1,int input2);
    int getAdditionNumber1();
    int getAdditionNumber2();
    vector <double> getVector();

    int getSum();


private:
    long size;
    int sum_unary_minus;
    int sum_unary_plus;
    int operation;
    int number1;
};

