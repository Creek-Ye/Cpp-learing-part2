#include<iostream>
using namespace std;
//��̬��Ա����
//1.������Ķ�����һ����̬��Ա����
//2.�ڳ�������ǰ�����ڴ�ռ䣬�����ȫ����
//3.��̬��Ա������Ҫ�������������⸳��ʼֵ

//��̬��Ա����
//1.������Ķ�����һ����̬��Ա����
//2.��̬��Ա����ֻ�ܵ��þ�̬���������ܵ��÷Ǿ�̬����

class person
{
public:
	static int m_age;//��̬��Ա��������������
	int m_value = 230;
	static void fuc1()//��̬��Ա����
	{
		m_age = 500;
		//m_value = 200;//�Ǿ�̬��Ա�������ɷ��ʵ���
	}
};
 int person::m_age = 100;//person �������µĸ���ʼֵ

 void test01()
 {
	 person p1;//����һ��person����p1
	 cout << p1.m_age << endl;//ͨ��������ʾ�̬����
	 person p2;
	 p2.m_age = 200;
	 cout << p2.m_age << endl;//p1��p2����һ����̬������
	 cout << person::m_age << endl;//���ʾ�̬������;��2

 }
 int main()
 {
	 test01();
	 system("pause");
	 return 0;
 }