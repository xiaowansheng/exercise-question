#include<iostream>
using namespace std;

class Person {
private:
	string name;
	string sex;
	int age;
public:
	Person(string name, string sex, int age) :name(name), sex(sex), age(age) {
		cout << "带参数的构造参数！age" <<age<< endl;
	}
	Person() {
		cout << "默认构造函数！" << endl;
		name = "空";
		sex = "空";
		age = 0;
	}
	Person(const Person& person) {
		this->name = person.name;
		this->sex = person.sex;
		this->age = person.age;
		this->age++;
		cout << "复制构造函数！" <<"age="<<age << endl;
	}
	~Person() {
		cout << "析构函数！age="<<age << endl;
	}

	static Person copy(const Person p) {//参数运行一次复制构造函数
		Person person = p;//运行一次复制构造函数；
		return person;//不会进行复制构造函数
	}
};


int main2() {
	//Person p1;
	//Person p2；
	//Person p3(p2);//复制构造函数
	Person* p4 = new Person("xiao1", "man", 12);
	Person p5 = Person::copy(*p4);
	Person p6 = p5;
	p6 = p5;//运行赋值
	delete p4;
	return 0;
}