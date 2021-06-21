#pragma once
#include<iostream>
using namespace std;
class Handler
{
protected:
	Handler* successor;
public:
	virtual void HandleRequest(int type) = 0;
};


class MainHandler : public Handler {
public:
	MainHandler() {	}
	void HandleRequest(int type) {
		cout << "Main Handler handles this Request." << endl;
	}
};

class AHandle :public Handler {
public:
	AHandle(Handler* successor){
		this->successor = successor;
	}
	void HandleRequest(int type) {
		if (type == 1) {
			cout << "A Handler handles this Request." << endl;
		}
		else {
			cout << "A Handler can't handle this Request." << endl;
			successor->HandleRequest(type);
		}
	}
};
class BHandle :public Handler {
public:
	BHandle(Handler* successor) {
		this->successor = successor;
	}
	void HandleRequest(int type) {
		if (type == 2) {
			cout << "B Handler handles this Request." << endl;
		}
		else {
			cout << "B Handler can't handle this Request." << endl;
			successor->HandleRequest(type);
		}
	}
};