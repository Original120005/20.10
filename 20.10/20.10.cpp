#include <iostream>
#include "Animal.h"
#include "Elephant.h"
#include "Pinguin.h"
#include "Parrot.h"
#include "Dog.h"
#include <list>
using namespace std;




int main() {
	Elephant elephant("elephant", "type", "climates", "Huge", "thick ");
	Pinguin pinguin("pinguin", "multi", "cold climate", "average", "warm");
	Parrot parrot("parrot", "bird", "warmer climes", "small", "can fly");
	Dog dog("dog", ",ulti", "city", "small ", "the best friend of human");

	list<Animal> lst;
	list<Animal>::iterator it;

	bool exit = false;
	int answer;
	string str_name;

	while (exit != true) {
		cout << "1. Add Animal\n2. Delete Animal\n3. Search\n4. Add to position\n5. Show\n6. Edit\n7. Exit\n-> ";
		cin >> answer;
		switch (answer) {
		case 1:
			cout << "\nChoose one of these:\n";
			cout << "1. Elephant\n2. Pinguin\n3. Parrot\n4. Dog\n-> ";
			int ans;
			cin >> ans;
			if (ans == 1) {
				lst.push_back(elephant);
			}
			else if (ans == 2) {
				lst.push_back(pinguin);
			}
			else if (ans == 3) {
				lst.push_back(parrot);
			}
			else if (ans == 4) {
				lst.push_back(dog);
			}
			else {
				cout << "" << endl;
			}
			cout << endl;
			break;

		case 2:
			lst.pop_back();
			break;

		case 3:
			cin >> str_name;
			if (str_name == "elephant" || str_name == "Elephant") {
				elephant.Print();
			}
			else if (str_name == "pinguin" || str_name == "Pinguin") {
				pinguin.Print();
			}
			else if (str_name == "parrot" || str_name == "Parrot") {
				parrot.Print();
			}
			else if (str_name == "dog" || str_name == "Dog") {
				dog.Print();
			}
			cout << endl << endl;
			break;

		case 4:
			lst.splice(lst.begin(), lst, prev(lst.end()));
			lst.splice(lst.end(), lst, next(lst.begin()));
			break;

		case 5:
			for (it = lst.begin(); it != lst.end(); it++) {
				cout << *it << endl;
			}
			cout << endl;
			break;

		case 6:
			cout << "\nEnter name: ";
			cin >> str_name;

			if (str_name == "elephant" || str_name == "Elephant") {
				elephant.Input(elephant);
				break;
			}
			else if (str_name == "pinguin" || str_name == "Pinguin") {
				pinguin.Input(pinguin);
				break;
			}
			else if (str_name == "parrot" || str_name == "Parrot") {
				parrot.Input(parrot);
				break;
			}
			else if (str_name == "dog" || str_name == "Dog") {
				dog.Input(dog);
				break;
			}
			cout << endl;
			break;

		case 7:
			exit = true;
			break;

		}
	}




}