#include<iostream>
using namespace std;

class Man {

public:
	Man() {
		cout << "man���캯��,��ַ��" << this << endl;

	}
	Man(const Man& m) {
		cout << "man���ƹ��캯��,��ַ��" << this << endl;

	}

	void printAddress() {
		cout << "man:" << this << endl;;
	}

	~Man() {
		cout << "man��������,��ַ��" << this << endl;
	}
	Man copy2(const Man& m) {
		return *this;
		//�������ض���ʱ���ṹ��һ���µ���ʱ���󣬷��ض�������ʱ����ԭ���Ķ���
	}
};

Man copy(const Man& m) {
	Man m1 = m;
	cout << "m:" << &m << endl;
	cout << "m1:" << &m1 << endl;
	return m1;
	//�������ض���ʱ���ṹ��һ���µ���ʱ���󣬷��ض�������ʱ����ԭ���Ķ���
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