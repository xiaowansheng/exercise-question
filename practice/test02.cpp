#include<iostream>
using namespace std;

class Person {
private:
	string name;
	string sex;
	int age;
public:
	Person(string name, string sex, int age) :name(name), sex(sex), age(age) {
		cout << "�������Ĺ��������age" <<age<< endl;
	}
	Person() {
		cout << "Ĭ�Ϲ��캯����" << endl;
		name = "��";
		sex = "��";
		age = 0;
	}
	Person(const Person& person) {
		this->name = person.name;
		this->sex = person.sex;
		this->age = person.age;
		this->age++;
		cout << "���ƹ��캯����" <<"age="<<age << endl;
	}
	~Person() {
		cout << "����������age="<<age << endl;
	}

	static Person copy(const Person p) {//��������һ�θ��ƹ��캯��
		Person person = p;//����һ�θ��ƹ��캯����
		return person;//������и��ƹ��캯��
	}
};


int main2() {
	//Person p1;
	//Person p2��
	//Person p3(p2);//���ƹ��캯��
	Person* p4 = new Person("xiao1", "man", 12);
	Person p5 = Person::copy(*p4);
	Person p6 = p5;
	p6 = p5;//���и�ֵ
	delete p4;
	return 0;
}