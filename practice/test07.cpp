#include <iostream>
using namespace std;

struct A
{
	int v;
	A(int vv) :v(vv) { }
	// �ڴ˴�������Ĵ���
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