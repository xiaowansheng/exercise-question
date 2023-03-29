#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>
#include <sstream>
#include <cstdlib>
using namespace std;

class Student {
	// 在此处补充你的代码
private:
	char name[20];
	int age;
	int studentId;
	double grade[4];
	double average;
public:
	Student() {
	}

	void input() {
		char buf[220];
		cin.getline(buf, 200);
		char* p = strtok(buf, ",");//函数原型：char *strtok(char *s, const char *delim);
									//Function：分解字符串为一组字符串。s为要分解的字符串，delim为分隔符字符串。
									//Description：strtok()用来将字符串分割成一个个片段。参数s指向欲分割的字符串，参数delim则为分割字符串，当strtok()在参数s的字符串中发现到参数delim的分割字符时 则会将该字符改为\0 字符。在第一次调用时，strtok()必需给予参数s字符串，往后的调用则将参数s设置成NULL。每次调用成功则返回被分割出片段的指针。
		strcpy(name, p);
		p = strtok(NULL, ",");//C 库函数 char *strtok(char *str, const char *delim) 分解字符串 str 为一组字符串，delim 为分隔符。
		age = atoi(p);
		p = strtok(NULL, ",");
		studentId = atoi(p);
		for (int i = 0; i < 4; i++)
		{
			p = strtok(NULL, ",");
			grade[i] = atoi(p);
		}
	}

	void calculate() {
		double sum=0;
		for (int i = 0; i < 4; i++) {
			sum += grade[i];
		}
		average = sum / 4;
	}


	void output() {
		cout << name << "," << age << "," << studentId << "," << average;
	}
	//
};

int main005() {
	Student student;        // 定义类的对象
	student.input();        // 输入数据
	student.calculate();    // 计算平均成绩
	student.output();       // 输出数据
	return 0;
}
