//
// Created by Claudia Feochari on 2018-04-20.
//

#include "CompositeOperand.h"
#include <iostream>

using namespace std;

CompositeOperand::CompositeOperand(int op, string n, int level,int sup, int sum) :
        Component(op,n, level,sup,sum)
{

}
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
    cout << this->getIndentation()<< this->getName() << endl;
    for (Component* component : components) {
        size += component->getSize();
    }
    return this->size;
}
int CompositeOperand::substract(int input) {
    int sub = input;
    return sub;
}
int CompositeOperand::add(int input1, int input2){

}
int CompositeOperand::multiply(int input1,int input2){

}
void CompositeOperand::printSize() {
    this->getSize();
    cout << this->getIndentation() << "Total: " << this->size << endl;
}
