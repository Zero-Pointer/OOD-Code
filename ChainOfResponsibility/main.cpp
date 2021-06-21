#include <iostream>
#include"Handler.h"
using namespace std;
int main()
{
	MainHandler* mainHandler = new MainHandler();
	AHandle* aHandler = new AHandle(mainHandler);
	BHandle* bHandler = new BHandle(aHandler);

	cout<<"Handle request 1:"<<endl;
	bHandler->HandleRequest(1);
	cout<<"-----"<<endl;

	cout<<"Handle request 2:"<<endl;
	bHandler->HandleRequest(2);
	cout<<"-----"<<endl;

	cout<<"Handle request 3:"<<endl;
	bHandler->HandleRequest(3);
	cout<<"-----"<<endl;

	delete mainHandler;
	delete aHandler;
	delete bHandler;
	return 0;
}
