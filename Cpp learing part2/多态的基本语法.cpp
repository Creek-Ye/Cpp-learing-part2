#include<iostream>
using namespace std;
//������̬��������
// 1.�м̳й�ϵ
// 2.����������д���ຯ��
// ʲô����д��
// ��1������ֵ����һ��
// ��2������Ҳһ��
// ��3���β��б�һ��
// ��4�������������Բ�һ��
//����һ������
class animal
{
public:
	virtual void func()
	{
		cout << "����Ľ���" << endl;
	}
};
class chicken :public animal
{
public:
	void func()
	{
		cout << "С���Ľ���" << endl;
	}
};
class dog :public animal
{
public:
	void func()
	{
		cout << "С���Ľ���" << endl;
	}
};
//��ַ��󶨣��ڱ���׶ξ��Ѿ�ȷ���˺����ĵ�ַ���������Ѿ�ȷ���˴������animal���͵ģ���һ�����õ���animal�µĳ�Ա������
//�������ɵ�ַ��󶨾ͱ����ڸ����funcǰ���virtual


void outvoice(animal&ani)//����һ�������ָ��������������������һ������
{
	ani.func();
}
void test01()
{
	chicken ch;
	outvoice(ch);//����ʱ��������Ķ���
}
int main()
{
	test01();
	system("pause");
	return 0;
}
