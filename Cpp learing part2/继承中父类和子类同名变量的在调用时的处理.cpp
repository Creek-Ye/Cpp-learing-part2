#include<iostream>
using namespace std;

class person
{
public:
	void func1()
	{
		cout << "person ������func1�ĵ���" << endl;;
	}
	void func1(int a)
	{
		cout << "person ������func1(int a)�ĵ���" << endl;
	}
public:
	int m_a=10;	
};


class children :public person//����һ��children���࣬��public�ķ�ʽ�̳�person����
{
public:
	void func1()
	{
		cout << "children ������func1�ĵ���" << endl;
	}
	int m_a=20;
};

void test01()
{
	children ch;
	cout << ch.m_a << endl;//����������Ӽ��ĳ�Ա����һ��ֱ�ӵ��û����ࣻ
	cout << ch.person::m_a << endl;//�������ø�������ͬ���ı�������Ҫ��������
	ch.func1();//Ҳ�ǵ��õ������е�
	//ch.func1(10)//ͬһ����func1��ʹ���вκ������صķ�ʽ����Ҳ�ǲ����Եģ���Ϊ�������е���������һ�����Ḳ�ǵ����������е�ͬ���Ƶĺ���
	ch.person::func1();
	ch.person::func1(10);

}
int main()
{
	test01();
	system("pause");
	return 0;
}