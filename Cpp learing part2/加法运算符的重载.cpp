#include<iostream>
using namespace std;
#include<string>

//�ӷ���������ع�
class cars_A
{
public:
	//���캯��
	cars_A(int a, int b):m_A(a),m_B(b)
	{

	}
	//��Ա���������ӷ���������ع�
	//cars_A operator+(cars_A &car)//ע���Ǳ�����operator+�����Ǵ���ı�����һ������
	//{
	//	cars_A temp(0,0);
	//	temp.m_A = this->m_A + car.m_A;
	//	temp.m_B = this->m_B + car.m_B;
	//	return temp;
	//}
	//����
	int m_A;
	int m_B;
};
//ȫ�ֺ��������ӷ���������ع�
cars_A operator+(cars_A& a, cars_A& b)
{
	cars_A temp(0, 0);
	temp.m_A = a.m_A + b.m_A;
	temp.m_B = a.m_A + b.m_B;
	return temp;
}
//void test01()
//{
//	cars_A p1(20, 20);
//	cars_A p2(30, 30);
//	cars_A p3 = p1 + p2;
//	//�����ӷ��ع��ı����ǳ�Ա�����ĵ��ã�����
//	p1.operator+(p2);
//	cout << p3.m_A << endl;
//	cout << p3.m_B << endl;
//}
void test02()
{
	cars_A p4(15, 15);
	cars_A p5(25, 25);
	cars_A p6 = p4 + p5;
	//�����ǵ���ȫ�ֺ���
	cars_A p7 = operator+(p4, p5);
	cout << p6.m_A << endl;
	cout << p6.m_B << endl;
	cout << p7.m_A << endl;
	cout << p7.m_B << endl;


	
}
int main()
{
	//test01();

	test02();
	system("pause");
	return 0;
}