#include<iostream>
using namespace std;

class Man {

public:
	Man() {
		cout << "man构造函数,地址：" << this << endl;

	}
	Man(const Man& m) {
		cout << "man复制构造函数,地址：" << this << endl;

	}

	void printAddress() {
		cout << "man:" << this << endl;;
	}

	~Man() {
		cout << "man析构函数,地址：" << this << endl;
	}
	Man copy2(const Man& m) {
		return *this;
		//函数返回对象时，会构造一个新的临时对象，返回对象引用时，是原本的对象。
	}
};

Man copy(const Man& m) {
	Man m1 = m;
	cout << "m:" << &m << endl;
	cout << "m1:" << &m1 << endl;
	return m1;
	//函数返回对象时，会构造一个新的临时对象，返回对象引用时，是原本的对象。
}

int main4() {
	//Man m;
	//Man m2=copy(m);
	////Man* m1 = copy(m);
	//cout << "m2=" << &m2 << endl;

	Man m;
	m.copy2(m).printAddress();

	return 0;

}