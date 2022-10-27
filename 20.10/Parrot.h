#pragma once
#include <iostream>
#include "Animal.h"
using namespace std;

class Parrot :public Animal {
	string name;

public:
	Parrot() {
		name = nullptr;
	}

	Parrot(const char* n, const char* t, const char* c, const char* s, const char* p) :Animal(n, t, c, s, p) {
		name = n;
	}

	void PrintAnimal() {
		cout << "Animal name = " << name << endl;
		this->Print();
	}

};