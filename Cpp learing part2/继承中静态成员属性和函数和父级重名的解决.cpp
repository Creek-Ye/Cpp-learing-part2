#include<iostream>
using namespace std;
class parent
{
public:
	//������̬��Ա���ԣ��������������⸳��ֵ
	static int m_a;
	//������̬�ĳ�Ա����
	static void func()
	{
		cout << "������func()�ĵ���" << endl;
	}
};
int parent:: m_a = 10;

class child:public parent
{
public:
	//������Ҳ��һ��һģһ���ľ�̬����
	static int m_a;
	//������Ҳ����һ��һģһ���ĳ�Ա��̬����
	static void func()
	{
		cout << "������func()�ĵ���" << endl;
	}
};
int child::m_a = 20;

void test01()
{
	//ͨ����������ķ�ʽ�ֱ��������͸�����ͬ���ľ�̬����
	child p;
	cout << "�����е�m_a=" << p.m_a<<endl;
	cout<< "�����е�m_a=" << p.parent::m_a<<endl;//��������
	//ͨ�������������������ʣ�
	cout << "�����е�m_a=" << child::m_a<<endl;
	cout << "�����е�m_a=" << child::parent::m_a<<endl;//��һ��::��ʾͨ���������ʣ��ڶ���::��ʾ�ڸ������������
	//ͨ����������ķ�ʽ�ֱ��������͸�����ͬ���ľ�̬����
	p.func();
	p.parent::func();
	//ͨ�������������������ʣ�
	child::func();
	child::parent::func();//��һ��::��ʾͨ���������ʣ��ڶ���::��ʾ�ڸ������������
}
int main()
{
	test01();
	system("pause");
	return 0;
}