//============================================================================
// Name        : Example2.cpp
// Author      : StSm
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Check {
public:
	Check() {
		cout << "Constructor !!! \n";
	}
	void Func1(void) {
		cout << "Func1 !!! \n";
	}
	void Func2(void) {
		cout << "Func2 !!! \n";
	}
};

class Potomok: public Check {
public:
	Potomok() {
		cout << "Constructor Potomok!!! \n";
	}
	void Func1(void) {
		cout << "Potomok1F !!! \n";
	}
	void Func2(void) {
		cout << "Potomok2F !!! \n";
	}
};

Check Test;
Potomok Test2;

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	Test.Func1();
	Test.Func2();
	Test2.Func2();
	return 0;
}
