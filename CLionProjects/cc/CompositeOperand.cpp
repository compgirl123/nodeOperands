//
// Created by Claudia Feochari on 2018-04-20.
//

#include "CompositeOperand.h"
#include <iostream>

using namespace std;

CompositeOperand::CompositeOperand(int level,string name ) :
        Component(level,name) {}

CompositeOperand::~CompositeOperand()
{
    for (Component* component : components) {
        delete component;
    }
}

void CompositeOperand::addComponent(Component* component) {
    this->components.push_back(component);
}

long CompositeOperand::getOutput() {
    for (Component* component : components) {
        size += component->getOutput();
    }
    return this->size;
}

int CompositeOperand::subtraction(int input) {
    int sub = input;
    return sub;
}

int CompositeOperand::add(){
    for (Component* component : components) {
        ad += component->add() ;
    }
    return this->ad;
}

int CompositeOperand::multiply(int input1, int input2){
    for (Component* component : components) {
        multi += component->multiply(input1,input2);
    }
    return this->multi;
}

void CompositeOperand::print() {
    this->getOutput();
}
