
#include<iostream>

//����һ��ԭʼ�ĳ����൰�⣬װ�����Ĺ����Ǹ�������ϸ���װ�Σ������ͣ��ɿ����������ʣ�ˮ����
class Cake {
public:
    virtual void showCake() = 0;
    //��ʾ�ú���û�к����壬���������������ﶨ��

    virtual ~Cake() {};
    std::string name;
};

class ConcreteCake : public Cake {
public:
    ConcreteCake() {
        name = "ԭʼ����";
    }

    void showCake() { std::cout << name.c_str() << std::endl; };

    ~ConcreteCake() {};

};