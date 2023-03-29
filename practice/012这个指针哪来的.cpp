#include <iostream>
using namespace std;

struct A
{
	int v;
	A(int vv) :v(vv) { }
	// 在此处补充你的代码
	A* getPointer() const {
		return new A(v);
	}
	//
};

int main012()
{
	const A a(10);
	const A* p = a.getPointer();
	cout << p->v << endl;
	return 0;
}