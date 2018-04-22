//
// Created by Claudia Feochari on 2018-04-20.
//

#pragma once
#include "Component.h"
#include "NumericOperation.h"
#include <vector>
#include <string>

using namespace std;

class CompositeOperand: public Component
{
public:
    CompositeOperand(int level,int sup, int sum)  ; //: Component(n, level);// {
        //this->size = 0;
    //};
        CompositeOperand(int level,int multiplication);
    CompositeOperand(int level,string name);
    ~CompositeOperand();
    long getSize();
    int substract(int input);
    int add();
    int multiply(int input1,int input2);
    void addComponent(Component*);
    void printSize();
    //string fuck();

    NumericOperation *nn;

private:
    vector<Component*> components;
    long size;

};