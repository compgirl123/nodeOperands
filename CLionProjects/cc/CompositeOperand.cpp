//
// Created by Claudia Feochari on 2018-04-20.
//

#include "CompositeOperand.h"
#include <iostream>

using namespace std;

CompositeOperand::CompositeOperand(int level,int sup, int sum) :
        Component(level,sup,sum) {}

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

long CompositeOperand::getSize() {
    cout << this->getName()<< endl;

    for (Component* component : components) {
        if(component->getName() == "-") {
            if(component->getIntegerOne()!=0 ||component->getIntegerTwo() !=0) {
                cout << component->getName() << " : "
                     << getSumUnaryMinus() << " , "
                     << component->getIntegerTwo()<< endl;
            }
            else{
                cout << component->getName() << " : "
                     << component->getSumUnaryPlus()
                        << endl;
            }

        }

        else if(component->getName() == "+") {
            if(component->getIntegerOne()!=0 ||component->getIntegerTwo() !=0) {
                cout << component->getName() << " : "
                     << component->getIntegerOne() << " , "
                     << component->getIntegerTwo()<< endl;
            } else{
                cout << component->getName() << " : "
                     << component->getSumUnaryPlus()
                     << endl;
            }
        }
        else if(component->getName() == "*") {
            cout << component->getName() << component->getSumUnaryPlus() << endl;
        }
    }
    for (Component* component : components) {
        size += component->getSize();
    }

    return this->size;
}
int CompositeOperand::substract(int input) {
    int sub = input;
    return sub;
}
int CompositeOperand::add(){

}
int CompositeOperand::multiply(int input1, int input2){
    return input1*input2;
}
void CompositeOperand::printSize() {
    this->getSize();
}
