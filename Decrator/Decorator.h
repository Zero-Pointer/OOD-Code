
#include"component.h"

class CakeDecrator : public Cake{
protected:
    Cake * pCake;   //ά��һ��Cake��������ã�ΪCake�������װ��
public:
    virtual void showCake() = 0;

    virtual ~CakeDecrator() {};
};

class CakeDecratorMilk: public CakeDecrator{
public:
    CakeDecratorMilk(Cake * pCake) {
        this->pCake = pCake;
    }

    void showCake() {
        this->name = pCake->name + "������";
        std::cout << name.c_str() << std::endl;
    }

    virtual ~CakeDecratorMilk() {};
}; 

class CakeDecratorChoclate: public CakeDecrator {
public:
    CakeDecratorChoclate(Cake * pCake) {
        this->pCake = pCake;
    }
    void showCake() {
        this->name = pCake->name + "���ɿ���";
       std::cout << name.c_str() << std::endl;
    };
    virtual ~CakeDecratorChoclate() {};
};