#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
class Mammal {
public:
	Mammal() {
		cout << "Mammal countructor...\n";
	}
	virtual ~Mammal() {
		cout << "Mammal destructor...\n";
	}
	virtual void speak() const {
		cout << "Mammal speak~\n";
	}
};

class Dog : public Mammal{
public:
	Dog() {
		cout << "Dog Constructor...\n";
	}
	~Dog() {
		cout << "Dog destructor...\n";
	}
	void speak() const {
		cout << "woof!\n";
	}
};

int main() {
	Mammal *pDog = new Dog;
	pDog->speak();
	delete pDog;
	return 0;
}