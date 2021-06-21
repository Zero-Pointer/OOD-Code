#pragma once
#include<string>
// 水果基类 声明了给水果传入Visitor（切果器）的接口
class FruitCuttor;
class Fruit{
protected:
    FruitCuttor* cuttor;
public:
    std::string name;
    virtual void accept(FruitCuttor *fruitCuttor)=0;
};

class Apple : public Fruit{
public:
    Apple(){
        this->name = "Apple";
    }
    void accept(FruitCuttor *fruitCuttor){
        this->cuttor = fruitCuttor;
    }
    void cutFruit();
};

class Banana: public Fruit{
public:
    Banana(){
        this->name = "Banana";
    }
    void accept(FruitCuttor *fruitCuttor){
        this->cuttor = fruitCuttor;
    }
    void cutFruit();
};
