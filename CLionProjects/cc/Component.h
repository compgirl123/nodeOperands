//
// Created by Claudia Feochari on 2018-04-20.
//

#pragma once
#include <string>

using namespace std;

class Component
{
public:
    Component(string n, int level,int sup, int sum, int multiplication) :
             name(n), level(level) , sum_unary_plus(sup), sum_unary_minus(sum),
             multiplication(multiplication)
            { this->setIndentation(); }

    Component(string n, int level,int integer1, int integer2) :
            name(n), level(level) , integer1(integer1),integer2(integer2){};

    Component(string n, int level,int sum) :
            name(n), level(level) , sum_unary_plus(sum){};

    Component(int level,int sum) :
            level(level) , sum_unary_plus(sum){};

    Component(int level,int integer1, int integer2) :
            level(level) , integer1(integer1),integer2(integer2){};

    ~Component();

    virtual long getSize() = 0;
    //claudia
    virtual int substract(int input) = 0;
    virtual int add() = 0;
    virtual int multiply(int input1, int input2) = 0;
    //claudia
    string getName() { return name; }
    string getIndentation() { return indentation; }
    int getSumUnaryPlus() {return sum_unary_plus; }
    int getSumUnaryMinus() {return sum_unary_minus; }
    int getIntegerOne(){return integer1;}
    int getIntegerTwo(){return integer2;}
    int geMultiplication() { return multiplication;}

    void setIndentation() {
        for (int i = 0; i < level; i++)
            indentation = indentation + "\t";
    }


private:
    string name;
    int level;
    string indentation = "";
    int operation;
    int sum_unary_plus;
    int sum_unary_minus;
    int integer1;
    int integer2;
    int multiplication;
};

