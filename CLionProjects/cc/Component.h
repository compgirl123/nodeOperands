//
// Created by Claudia Feochari on 2018-04-20.
//

#pragma once
#include <string>
#include <vector>
using namespace std;

class Component
{
public:
    // for multiplication
    Component(string n, int level,int integer1, int integer2) :
            name(n), level(level) , integer1(integer1),integer2(integer2){};

    // for addition
    Component(string n, int level,vector <double> integers) :
            name(n), level(level) , integers(integers){};

    // for levels
    Component(int level,string l) :
            level(level) , name(l){};

    // for subtraction and addition totals
    Component(string n, int level,int sum) :
            name(n), level(level) , sum_unary_plus(sum){};

    // destructor
    ~Component();

    virtual long getOutput() = 0;
    virtual int add() = 0;
    virtual int multiply(int input1, int input2) = 0;
    virtual int subtraction(int input) = 0;

    string getName() {return name;}
    vector <double> getVectorNumbers(){return integers;}

    int getSumUnaryPlus() {return sum_unary_plus;}
    int getLevel(){return level;}
    int getIntegerOne(){return integer1;}
    int getIntegerTwo(){return integer2;}

private:
    string name;
    int level;
    int sum_unary_plus;
    int integer1;
    int integer2;

    vector <double> integers;

};

