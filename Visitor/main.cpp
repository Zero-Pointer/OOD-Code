#include "Element.h"
#include "Visitor.h"

int main(){
    Apple* apple = new Apple();
    Banana* banana = new Banana();
    FruitCuttorBlock* cuttorBlock = new FruitCuttorBlock();
    FruitCuttorSlice* cuttorSlice = new FruitCuttorSlice();
    apple->accept(cuttorBlock);
    banana->accept(cuttorSlice);
    apple->cutFruit();
    banana->cutFruit();
    delete apple, banana, cuttorBlock, cuttorSlice;
    return 0;
}