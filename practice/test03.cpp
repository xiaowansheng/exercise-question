#include<iostream>
using namespace std;

class School {
private:
	string id;
	string name;
public:
	School() {
		id = "空";
		name = "空";
		cout << "school构造函数。"<<this->toString()<< endl;
	}
	School(string id, string name) {
		this->id = id;
		this->name = name;
		cout << "school构造函数。"<<this->toString()<< endl;
	}
	string getId() {
		return id;
	}
	void setId(string id) {
		this->id = id;
	}
	string getName() {
		return name;
	}
	void setName() {
		this->name = name;
	}
	string toString() {
		return "id=" + id + ",name=" + name;
	}
	~School() {
		cout << "school析构函数。"<<this->toString()<< endl;
	}
};

class Student {
private:
	string id;
	string name;
	//string myclass;
	School* school;
public:
	Student() {
		id = "空";
		name = "空";
		//myclass = "空";
		school = new School();
		cout << "student构造函数。" <<this->toString()<< endl;
	}
	Student(string id,string name,string sid,string sname):id(id),name(name) {
		school=new School(sid, sname);
		cout << "student构造函数。" <<this->toString()<< endl;
	}
	Student(const Student& s) {
		this->id = s.id;
		this->name = s.name;
		delete school;
		this->school = new School(s.school->getId(), s.school->getName());
	}
	Student& operator=(const Student& s) {
		if (&s == this) {
			return *this;
		}
		this->id = s.id;
		this->name = s.name;
		delete school;
		this->school = new School(s.school->getId(), s.school->getName());
		return *this;
	}
	School* getSchool() {
		return school;
	}
	string toString() {
		return "id=" + id + ",name=" + name +",school:{" + school->toString()+"}";
	}
	void printAddress() {
		cout << "student:" << this << ",school:" << school << endl;
	}
	~Student() {
		cout << "student析构函数。" <<this->toString()<< endl;
		delete school;
	}
};

int main3() {
	Student* s=new Student("1","张阿三","11000","北京大学");
	s->printAddress();
	Student s1 = *s;
	Student s2;
	s2 = *s;
	s1.printAddress();
	s2.printAddress();


	delete s;
	return 0;
}