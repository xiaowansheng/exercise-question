#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
class Complex {
private:
    double r, i;
public:
    void Print() {
        cout << r << "+" << i << "i" << endl;
    }
    // 在此处补充你的代码
    Complex() {
        r = 0;
        i = 0;
    }
    Complex& operator= (const char* s){
        this->r = (int)s[0]-48;
        this->i = (int)s[2]-48;
        return *this;
    }
    //
};
int main008() {
    Complex a;
    a = "3+4i"; a.Print();
    a = "5+6i"; a.Print();
    return 0;
}