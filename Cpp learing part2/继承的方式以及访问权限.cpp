#include<iostream>
using namespace std;
//����һ������
class parent1
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};
//����һ�����ࣺ
class children1:public parent1//����һ�����࣬��public�ķ�ʽ�̳и���parent
{
	//����һ����Ա����
	void func01()
	{
		m_a = 10;//�̳���������publicȨ��
		m_b = 20;//�̳���������protectedȨ��
		//m_c = 30;����privateȨ�޵�������ʲ���
	}
};

class parent2
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};
//����һ�����ࣺ
class children2 :protected parent2//����һ�����࣬��protected�ķ�ʽ�̳и���parent
{
	//����һ����Ա����
	void func01()
	{
		m_a = 10;//�̳��������protectedȨ��
		m_b = 20;//�̳���������protectedȨ��
		//m_c = 30;����privateȨ�޵�������ʲ���
	}
};

class parent3
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};
//����һ�����ࣺ
class children3 :protected parent3//����һ�����࣬��protected�ķ�ʽ�̳и���parent
{
	//����һ����Ա����
	void func01()
	{
		m_a = 10;//�̳��������privateȨ��
		m_b = 20;//�̳���������privateȨ��
		//m_c = 30;����privateȨ�޵�������ʲ���
	}
};
void test01()
{
	children3 ch3;
	//ch2.m_a = 20;//protectedȨ�����ⲻ���Է��ʵ�
	//ch1.m_b = 20;//����̳�������Ȩ��Ϊ����Ȩ�޷��ʲ���
}
