#include <iostream>
#include "CompositeOperand.h"
#include "Component.h"
#include "NumericOperation.h"

using namespace std;

int main() {

    NumericOperation* int_add = new NumericOperation("+",2, 7, 2);
    int sum_positive = int_add->add();

    int number1 = int_add->getAdditionNumber1();
    int number2 = int_add->getAdditionNumber2();


    NumericOperation* addition = new NumericOperation("+", 1, sum_positive);
    NumericOperation* substraction = new NumericOperation("-", 2, -5);
    NumericOperation* subtraction2 = new NumericOperation("-", 1,-5);

    int sum_negative = substraction->getSum();

    NumericOperation* multiplicaion = new NumericOperation("*", sum_negative, sum_positive,0);
    int multi_result = multiplicaion->multiply(sum_negative,sum_positive);
    NumericOperation* multiplication = new NumericOperation("*",0 ,multi_result);


    CompositeOperand* topLevel = new CompositeOperand(0,"Level 1");
    CompositeOperand* midLevel = new CompositeOperand(1,"Level 2");
    CompositeOperand* bottomLevel = new CompositeOperand(2,"Level 3");

    topLevel->addComponent(midLevel);
    topLevel->addComponent(multiplication);

    midLevel->addComponent(bottomLevel);
    midLevel->addComponent(addition);
    midLevel->addComponent(substraction);

    bottomLevel->addComponent(int_add);
    bottomLevel->addComponent(subtraction2);

    topLevel->getSize();


    cin.get();

    return 0;
}
