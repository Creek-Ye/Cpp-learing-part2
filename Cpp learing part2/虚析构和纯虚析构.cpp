#include<iostream>
using namespace std;
class animal
{
public:
	virtual void func() = 0;
	animal()
	{
		cout << "����animal���캯���ĵ���" << endl;
	}
	//�ͷŸ���ָ��ָ�������Ķ���
	//����1����������������
	//virtual~animal()//�����������������к��������
	//{
	//	cout << "���������������ĵ���" << endl;
	//}
	//����2�����촿����������
	virtual~animal() = 0;//��������
};
animal::~animal()//������������
{
	cout << "���������������ĵ���" << endl;
}

class chicken:public animal
{
	void func()
	{
		cout << "the chicken age is"<<*age<<"which is bibiing" << endl;
	}
public:
	int* age = new int(10);//������Ķ����п���һ������
	chicken()
	{
		cout << "����chicken���캯���ĵ���" << endl;
	}
	~chicken()
	{
		cout << "����chicken���������ĵ���" << endl;
		if (age != NULL)
		{
			delete age;
			age = NULL;
		}
	}
};

void test()
{
	animal* abs = new chicken;//�ø����һ��ָ��ָ������ĵ�һ��new�����Ķ���

	abs->func();

	delete abs;//�����ָ�봴���ڶ����ˣ�Ҫ�ͷţ������ָ�봴���ڶ����ˣ�Ҫ�ͷţ������ָ�봴���ڶ����ˣ�Ҫ�ͷţ�
}
int main()
{
	test();
	system("pause");
	return 0;
}
