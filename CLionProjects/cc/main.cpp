#include <iostream>
#include "CompositeOperand.h"
#include "Component.h"
#include "NumericOperation.h"

using namespace std;

int main() {
    NumericOperation* addition = new NumericOperation("+", 1, 7,1);
    // the two arguments (2nd and third ) are the result of the addition
    //int addition_number = addition->getAdditionNumber1();
    /*cout <<"HELLO"<< addition->getAdditionNumber1() << endl;
    cout <<"HELLO"<< addition->getAdditionNumber2() << endl;*/
    int total_sum_addition = addition->add();
    CompositeOperand* topLevel = new CompositeOperand(0,"*", 0,0,0);
    // 1st parameter is the operand mulitiplicaiton result
    CompositeOperand* midLevel = new CompositeOperand(0,"-", 1,total_sum_addition,0);
    CompositeOperand* midLevel2 = new CompositeOperand(0,"+", 1,0,0);
    CompositeOperand* bottomLevel = new CompositeOperand(0,"Integer nodes", 2,0,0);

    /*NumericOperation* photo1 = new NumericOperation(2250, "Photo 1", 0);
    NumericOperation* photo2 = new NumericOperation(3242, "Photo 2", 1);
    NumericOperation* document1 = new NumericOperation(12332, "Doc 1", 2);
    NumericOperation* document2 = new NumericOperation(122345, "Doc 2", 0);
    NumericOperation* document3 = new NumericOperation(9392, "Doc 3", 2);
    NumericOperation* audio1 = new NumericOperation(3234, "Audio 1", 1);
    NumericOperation* audio2 = new NumericOperation(13241, "Audio 2", 2);
    NumericOperation* video1 = new NumericOperation(122341431, "Video 1", 1);
     */

    topLevel->addComponent(midLevel);
    topLevel->addComponent(midLevel2);
    /*topLevel->addComponent(photo1);
    topLevel->addComponent(document2);

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

    topLevel->printSize();


    cin.get();

    return 0;
}
