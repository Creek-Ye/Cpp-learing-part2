#include<iostream>
using namespace std;
class person
{

};

class people
{
public:
	int m_age = 10;//�Ǿ�̬��Ա����ռ�����ڵĿռ�
	static int m_size; //��������
	void fun01()//�Ǿ�̬��Ա����
	{

	}
	static void func02()//��̬��Ա����
	{

	}
};
int people:: m_size=20; //���⸳��ֵ��
void test01()
{
	person p1;
	cout << "�ն����ռ�ÿռ�Ϊ" << sizeof(p1) << endl;
}
void test02()
{
	people p2;
	cout << "�ն����ռ�ÿռ�Ϊ" << sizeof(p2) << endl;
}
int main()
{
	//test01();

	test02();//���˷Ǿ�̬��Ա����ռ�����ڿռ��⣬ �����ľ�̬��Ա��������̬�ĺͷǾ�̬�ĺ�������ռ�����ڿռ䡣
	system("pause");
	return 0;


}