#include<iostream>
using namespace std;
#include<string>

//����һ��ѧ������
class student
{
	//����Ȩ��
public:
	//��Ա���Ի�г�Ա����
	string m_name;
	string m_number;
	//��Ա������г�Ա����
	//1.��Ա��ֵ
	void set_val(string name,string number)
	{
		m_name = name;
		m_number = number;
	}
	void printf()
	{
		cout << "ѧ������Ϊ��" << m_name << endl;
		cout << "ѧ��ѧ��Ϊ��" << m_number << endl;
	}
};
int main()
{
	//����һ��ѧ����Ķ���s1
	student s1;
	s1.set_val("С��", "25");
	s1.printf();

	//����һ��ѧ����Ķ���s2;
	student s2;
	s2.m_name = "С��";
	s2.m_number = "33";
	s2.printf();

	system("pause");
	return 0;
}
