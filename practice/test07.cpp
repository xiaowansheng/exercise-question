#include <iostream>
using namespace std;

struct A
{
	int v;
	A(int vv) :v(vv) { }
	// 在此处补充你的代码
	A* getPointer() {
		A* a = new A(v);
		cout<<"&a:" << &a << endl;
		return a;
	}
	//
};

int main7()
{
	A a(10);
	A* p = a.getPointer();
	cout <<"&p:" << &p << endl;
	return 0;
}