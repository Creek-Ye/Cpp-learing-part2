#include<iostream>
using namespace std;
//����һ��person ��
class person
{
public:
	//�������캯��
	// 1.Ĭ�Ϲ��캯��
	person()
	{
		cout << "Ĭ�Ϲ��캯���ĵ���" << endl;
	}
	//2.�вι��캯��
	person(int a)
	{
		m_age = a;
		cout << "�вι��캯���ĵ���" << endl;
	}
	//3.�������캯��
	person(const person& p)
	{
		m_age = p.m_age;
		cout << "�������캯���ĵ���" << endl;
	}
	//��������
	~person()
	{
		cout << "���������ĵ���" << endl;
	}
	//����
	int m_age;

};
//���ÿ������캯��
//����1��
void test01()
{
	person p1(10);//����һ��p1���� ����p1�����вι��캯��
	person p2(p1);//����һ������p2�����Ұ�p1�����Զ���ʼ��������p2
	cout << "aaaaaaaaaaaaaaa" << endl;
}

//����2��
//������Ϊ�βθ����� ֵ����

void func01(person p)
{
	cout << "invoke of func" << endl;
}
void test02()//������Ϊ�β� ֵ����
{
	person p1;//�ȴ���һ������p1
	func01(p1);
}

//����3��
//�������ؾֲ�����,Ҳ��ֵ����
person func02()
{
	person p1(10);
	cout << "p1's address is: " << (int)&p1 << endl;
	return p1;
}
void test03()
{
	person p=func02();
	cout << "p's address is: " << (int)&p << endl;
}


int main()
{
	//test01();

	//test02();

	test03();
	system("pause");
	return 0;
}