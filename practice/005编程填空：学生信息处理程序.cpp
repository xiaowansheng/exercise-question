#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>
#include <sstream>
#include <cstdlib>
using namespace std;

class Student {
	// �ڴ˴�������Ĵ���
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
		char* p = strtok(buf, ",");//����ԭ�ͣ�char *strtok(char *s, const char *delim);
									//Function���ֽ��ַ���Ϊһ���ַ�����sΪҪ�ֽ���ַ�����delimΪ�ָ����ַ�����
									//Description��strtok()�������ַ����ָ��һ����Ƭ�Ρ�����sָ�����ָ���ַ���������delim��Ϊ�ָ��ַ�������strtok()�ڲ���s���ַ����з��ֵ�����delim�ķָ��ַ�ʱ ��Ὣ���ַ���Ϊ\0 �ַ����ڵ�һ�ε���ʱ��strtok()����������s�ַ���������ĵ����򽫲���s���ó�NULL��ÿ�ε��óɹ��򷵻ر��ָ��Ƭ�ε�ָ�롣
		strcpy(name, p);
		p = strtok(NULL, ",");//C �⺯�� char *strtok(char *str, const char *delim) �ֽ��ַ��� str Ϊһ���ַ�����delim Ϊ�ָ�����
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
	Student student;        // ������Ķ���
	student.input();        // ��������
	student.calculate();    // ����ƽ���ɼ�
	student.output();       // �������
	return 0;
}
