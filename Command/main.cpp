#include <iostream>
#include "Command.h"

int main()
{
    Reciver* reciver = new Reciver();
    ConcreteCommand* concreteCommand = new ConcreteCommand(reciver);

    concreteCommand->execute();

    delete reciver;
    delete concreteCommand;
    return 0;
}