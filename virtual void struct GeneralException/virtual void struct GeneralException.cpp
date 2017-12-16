// virtual void struct GeneralException.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

struct GeneralException {
	virtual void print() { std::cout << "G"; }
};

struct SpecialException : public GeneralException {
	void print() override { std::cout << "S"; }
};

void f() { throw SpecialException(); }

int main()
{
	try {
		f();
	}
	catch (GeneralException e) {
		e.print();
	}
    return 0;
}

