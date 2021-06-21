#pragma once
#include<iostream>
using namespace std;
class Reciver {
public:
	void action() {
		cout << "Start to action.";
	}
};

class Command{
protected:
	Reciver* reciver;
public:
	virtual void execute() = 0;
};

class ConcreteCommand : public Command {
public:
	ConcreteCommand(Reciver* reciver) {
		this->reciver = reciver;
	}
	void execute() {
		reciver->action();
	}
};
