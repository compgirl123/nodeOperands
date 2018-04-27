#include <iostream>
#include "CompositeOperand.h"
#include "Component.h"
#include "NumericOperation.h"
#include <vector>

using namespace std;

int main() {

    cout << "Welcome to the fun program game" << endl;
    cout << "Enter digits to add (enter any non number to stop) -->"<< endl;

    double num;
    vector<double> array;

    while (cin >> num){
        array.push_back(num);
    }

    for(int x=0;x<array.size();x++) {
        cout << array.at(x);
    }
    cout << endl;

    CompositeOperand* topLevel = new CompositeOperand(1,"Level 1");
    CompositeOperand* midLevel = new CompositeOperand(2,"Level 2");
    CompositeOperand* bottomLevel = new CompositeOperand(3,"Level 3");

    NumericOperation* int_add = new NumericOperation("+",3, 7, 22);
    //NumericOperation* int_add = new NumericOperation("+",3,array);
    NumericOperation* substraction = new NumericOperation("-", 2, -5);
    int sum_positive = int_add->add();

    int number1 = int_add->getAdditionNumber1();
    int number2 = int_add->getAdditionNumber2();


    NumericOperation* addition = new NumericOperation("+", 2, sum_positive);
    NumericOperation* subtraction2 = new NumericOperation("-", 3,-5);

    int sum_negative = substraction->getSum();

    NumericOperation* multiplicaion = new NumericOperation("*", sum_negative, sum_positive,1);
    int multi_result = multiplicaion->multiply(sum_negative,sum_positive);
    NumericOperation* multiplication = new NumericOperation("*",1 ,multi_result);


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
