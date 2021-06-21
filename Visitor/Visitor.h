#pragma once

#include "Element.h"
#include <iostream>
using namespace std;

// 一个切果器基类 提供了切苹果和香蕉的接口
class FruitCuttor{
public:
    virtual void cutApple(Apple *apple)=0;
    virtual void cutBanana(Banana *banana)=0;
};

class FruitCuttorBlock: public FruitCuttor{
public:
    void cutApple(Apple *apple){
        cout<<"Cut "<<apple->name<<" to BLOCK!"<<endl;
    }
        void cutBanana(Banana *banana){
        cout<<"Cut "<<banana->name<<" to BLOCK!"<<endl;
    }
};

class FruitCuttorSlice: public FruitCuttor{
public:
    void cutApple(Apple *apple){
        cout<<"Cut "<<apple->name<<" to SLICE!"<<endl;
    }
        void cutBanana(Banana *banana){
        cout<<"Cut "<<banana->name<<" to SLICE!"<<endl;
    }
};