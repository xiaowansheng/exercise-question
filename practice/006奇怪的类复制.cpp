#include <iostream>
using namespace std;
class Sample {
public:
	int v;
	// 在此处补充你的代码
	Sample() {
		v = 5;
	}

	Sample(const int& a) {
		v = a;
	}

	Sample(const Sample& s) {
		v = s.v+2;
	}

	//
};
void PrintAndDouble(Sample o)
{
	cout << o.v;
	cout << endl;
}
int main006()
{
	Sample a(5);
	Sample b = a;
	PrintAndDouble(b);
	Sample c = 20;
	PrintAndDouble(c);
	Sample d;
	d = a;
	cout << d.v;
	return 0;
}