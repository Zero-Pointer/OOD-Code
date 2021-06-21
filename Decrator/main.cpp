
#include"decorator.h"

int main() {
    ConcreteCake* pConCake = new ConcreteCake();
    pConCake->showCake();

    CakeDecratorMilk* pDecMilk = new CakeDecratorMilk(pConCake);
    pDecMilk->showCake();
    CakeDecratorChoclate* pDecCho = new CakeDecratorChoclate(pDecMilk);
    pDecCho->showCake();

    delete pConCake;
    delete pDecMilk;
    delete pDecCho;
    return 0;
}