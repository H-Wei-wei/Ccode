#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
class Base {
public:
	int fn1() const {
		cout << "基类的函数fn1()" << endl;
		return 1;
	}
	int fn2() const {
		cout << "基类的函数fn2()" << endl;
		return 2;
	}
};
class Derived :private Base {
public:
	int fn1() {
		cout << "派生类的函数fn1()" << endl;
		return Base::fn1();
	};
	int fn2() {
		cout << "派生类的函数fn2()" << endl;
		return Base::fn2();
	};
};

int main() {
	Derived a;
	cout << "a.fn1() = " << a.fn1() << endl;
	cout << "a.fn2() = " << a.fn2() << endl;
	return 0;
}