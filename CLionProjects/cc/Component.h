//
// Created by Claudia Feochari on 2018-04-20.
//

#pragma once
#include <string>

using namespace std;

class Component
{
public:
    Component(int op, string n, int level,int sup, int sum) :
            operation(op), name(n), level(level) , sum_unary_plus(sup), sum_unary_minus(sum)
            { this->setIndentation(); }
    ~Component();

    virtual long getSize() = 0;
    //claudia
    virtual int substract(int input) = 0;
    virtual int add() = 0;
    virtual int multiply(int input1,int input2) = 0;
    //claudia
    string getName() { return name; }
    string getIndentation() { return indentation; }
    int getSumUnaryPlus() {return sum_unary_plus; }
    int getSumUnaryMinus() {return sum_unary_minus; }
    int getOperation() { return operation;}

    void setIndentation() {
        for (int i = 0; i < level; i++)
            indentation = indentation + "\t";
        //indentation = indentation + "|";
    }


private:
    string name;
    int level;
    string indentation = "";
    int operation;
    int sum_unary_plus;
    int sum_unary_minus;
};

