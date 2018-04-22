#include <iostream>
#include "CompositeOperand.h"
#include "Component.h"
#include "NumericOperation.h"

using namespace std;
// THE ADDITION AND SUBSTRACTION CLASSES WILL CONTAIN THE SUM of THE values!!!
int main() {

    NumericOperation* int_add = new NumericOperation("+",2, 7, 2);
    int sum_positive = int_add->add();

    int number1 = int_add->getAdditionNumber1();
    int number2 = int_add->getAdditionNumber2();

    cout << number1<<endl;
    cout << number2<<endl;
    cout << sum_positive << endl;

    NumericOperation* addition = new NumericOperation("+", 1, sum_positive);
    NumericOperation* substraction = new NumericOperation("-", 2, -5);
    NumericOperation* substraction2 = new NumericOperation("-", 1,-5);

    int sum_negative = substraction->getSum();

    NumericOperation* multiplicaion = new NumericOperation("*", sum_negative, sum_positive,0);
    int multiplication = multiplicaion->multiply(sum_negative,sum_positive);

    cout << multiplication << endl;

    CompositeOperand* topLevel = new CompositeOperand(0,multiplication);
    CompositeOperand* midLevel = new CompositeOperand(1,sum_positive);
    CompositeOperand* midLevel2 = new CompositeOperand(1,sum_negative);
    CompositeOperand* bottomLevel = new CompositeOperand(2,number1,number2);
    CompositeOperand* bottomLevel2 = new CompositeOperand(2,sum_negative);

    topLevel->addComponent(midLevel);
    topLevel->addComponent(midLevel2);
    topLevel->addComponent(multiplicaion);

    midLevel->addComponent(bottomLevel);
    midLevel->addComponent(bottomLevel2);
    midLevel->addComponent(addition);
    midLevel2->addComponent(substraction2);

    bottomLevel->addComponent(int_add);
    bottomLevel2->addComponent(substraction);

    topLevel->printSize();


    /*NumericOperation* photo1 = new NumericOperation(2250, "Photo 1", 0);
    NumericOperation* document3 = new NumericOperation(9392, "Doc 3", 2);
    NumericOperation* audio1 = new NumericOperation(3234, "Audio 1", 1);
    NumericOperation* audio2 = new NumericOperation(13241, "Audio 2", 2);
    NumericOperation* video1 = new NumericOperation(122341431, "Video 1", 1);
     */

    /*midLevel->addComponent(audio1);
    midLevel->addComponent(video1);
    midLevel->addComponent(photo2);

    midLevel2->addComponent(bottomLevel);
    midLevel2->addComponent(audio1);

    bottomLevel->addComponent(document1);
    bottomLevel->addComponent(document3);
    bottomLevel->addComponent(audio2);
     */


    cin.get();

    return 0;
}
