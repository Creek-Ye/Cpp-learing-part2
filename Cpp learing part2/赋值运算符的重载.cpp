#include<iostream>
using namespace std;
class person
{
public:
	//�������캯����
	person(int age)
	{
		m_age = new int(age);
	}
	//������������
	~person()
	{
		if (m_age != NULL)
		{
			delete m_age;
			m_age = NULL;
		}
	}
	//��Ա�����ڲ�����ֵ�����������
	person& operator=(person &p)//�Լ�����һ����ֵ����������أ�������ʹ��ϵͳ�Դ��ĸ�ֵ��������Ӷ���ɵ�new�����ĵ�ַ������ʱ�ظ�ɾ������ɵĴ���
	{
		this->m_age = new int (*(p.m_age));
		return *this;
	}

	int *m_age;
};

void test01()
{
	person p1 = person(10);
	person p2 = person(15);
	person p3(30);
	p3 = p2 = p1;//�����������������ĸ�ֵ����������أ����л���������Զ������ĸ�ֵ���캯������ǳ����
	cout <<* p1.m_age << endl;
	cout <<* p2.m_age << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}
