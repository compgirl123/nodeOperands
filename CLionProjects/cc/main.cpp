#include <iostream>
#include "CompositeOperand.h"
#include "Component.h"
#include "NumericOperation.h"

using namespace std;
// THE ADDITION AND SUBSTRACTION CLASSES WILL CONTAIN THE SUM of THE values!!!
int main() {

    NumericOperation* int_add = new NumericOperation("+",2, 7, 2);
    int number1 = int_add->add();

    cout << number1 << endl;

    NumericOperation* addition = new NumericOperation("+", number1, 1);
    NumericOperation* substraction = new NumericOperation("-", -5, 2);

    int negative_number = substraction->getAdditionNumber1();
    int total_sum_addition = addition->add();


    /*NumericOperation* multiplicaion = new NumericOperation("*", negative_number, total_sum_addition,0);
    int multiplication = multiplicaion->multiply(negative_number,total_sum_addition);

    cout << multiplication;*/

    //CompositeOperand* topLevel = new CompositeOperand("*", 0,multiplication);
    /*CompositeOperand* midLevel = new CompositeOperand("-", 1,total_sum_addition,4);
    CompositeOperand* midLevel2 = new CompositeOperand("+", 1,5,4);
    CompositeOperand* bottomLevel = new CompositeOperand("Integer nodes", 2,0,0);*/

    /*NumericOperation* photo1 = new NumericOperation(2250, "Photo 1", 0);
    NumericOperation* document3 = new NumericOperation(9392, "Doc 3", 2);
    NumericOperation* audio1 = new NumericOperation(3234, "Audio 1", 1);
    NumericOperation* audio2 = new NumericOperation(13241, "Audio 2", 2);
    NumericOperation* video1 = new NumericOperation(122341431, "Video 1", 1);
     */

    /*topLevel->addComponent(midLevel);
    topLevel->addComponent(midLevel2);*/
    /*topLevel->addComponent(photo1);

    midLevel->addComponent(bottomLevel);
    midLevel->addComponent(audio1);
    midLevel->addComponent(video1);
    midLevel->addComponent(photo2);

    midLevel2->addComponent(bottomLevel);
    midLevel2->addComponent(audio1);

    bottomLevel->addComponent(document1);
    bottomLevel->addComponent(document3);
    bottomLevel->addComponent(audio2);
     */

    //topLevel->printSize();


    cin.get();

    return 0;
}
