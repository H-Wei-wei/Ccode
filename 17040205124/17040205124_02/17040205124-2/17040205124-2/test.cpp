#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

class Rectangle{
public:
	Rectangle(float l, float w){
		length = l;
		width = w;
	}
	~Rectangle(){
	}
	float getArea(){
		return length * width;
	}
	float getlength(){
		return length;
	}
	float getwidth(){
		return width;
	}
private:
	float length;
	float width;
};
int main(){
	float length, width;
	cout << "��������εĳ���:";
	cin >> length;
	cout << "��������εĿ��:";
	cin >> width;
	Rectangle r(length, width);
	cout << "��Ϊ" << length << "��Ϊ" << width << "�ľ��ε����Ϊ:" << r.getArea()
		<< endl;
	return 0;
}