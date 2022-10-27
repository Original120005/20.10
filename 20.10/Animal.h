#pragma once
#include <iostream>
#include <list>
using namespace std;

class Animal {
	string name;
	string type;
	string continent;
	string size;
	string peculiarity; 

public:
	Animal() {
		continent = nullptr;
		size = nullptr;
		peculiarity = nullptr;
		name = nullptr;
	}

	Animal(const char* n, const char* t, const char* c, const char* s, const char* p) {
		name = n;
		type = t;
		continent = c;
		size = s;
		peculiarity = p;
	}

	friend ostream& operator<<(ostream& out, Animal& obj) {
		cout << "\nName: " << obj.name << endl;
		cout << "Type of animal = " << obj.type << endl;
		cout << "Place of animal = " << obj.continent << endl;
		cout << "Size of animal = " << obj.size << endl;
		cout << "Peculiarity of animal = " << obj.peculiarity << endl;
		return out;
	}

	void Input(Animal& obj) {
		cout << "Enter new name: ";
		cin >> obj.name;
		name = obj.name;

		cout << "Enter new type: ";
		cin >> obj.type;
		type = obj.type;

		cout << endl;
	}

	void Print() {
		cout << "Type of animal = " << type << endl;
		cout << "Place of animal = " << continent << endl;
		cout << "Size of animal = " << size << endl;
		cout << "Peculiarity of animal = " << peculiarity << endl;
		cout << "\n\n";
	}

};