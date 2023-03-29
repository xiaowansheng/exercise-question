#include <iostream>
using namespace std;
class A {
public:
	int val;

	A(int
		// 在此处补充你的代码
		a) {
		val = a;
	}
	A() {
		val = 123;
	}
	A& operator=(const A& a) {
		this->val = a.val;
		return *this;
	}
	A& GetObj() {
		return *this;
	}
	//
};
int main010()
{
	int m, n;
	A a;
	cout << a.val << endl;
	while (cin >> m >> n) {
		a.GetObj() = m;
		cout << a.val << endl;
		a.GetObj() = A(n);
		cout << a.val << endl;
	}
	return 0;
}