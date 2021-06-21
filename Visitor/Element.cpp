#include "Element.h"
#include "Visitor.h"

void Apple::cutFruit(){
    this->cuttor->cutApple(this);
}
void Banana::cutFruit(){
    this->cuttor->cutBanana(this);
}