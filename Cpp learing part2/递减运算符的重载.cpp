#include<iostream>
using namespace std;

class integration
{
friend ostream& operator<<(ostream& cout, integration p);
public:

	//���캯��
	integration()
	{
		m_num = 10;//ͨ�����캯������ֵ��
	}
	//��Ա��������ݼ������������
	//1.ǰ�õݼ�
	integration& operator--()//�ö�����������Ϊ����ͬһ�����������㣬�������ֵ�Ļ��൱�ڿ�������һ���µĺ����һģһ���Ķ��������㣻
	{
		//�ȶ������ֵ���еݼ���
		--m_num;
		//�ٷ��ظö�����
		return *this;
	}
	
	//2.���õݼ�
	integration operator--(int)
	{
		//����һ����ʱ������¼--ǰ�����״̬
		integration temp = *this;
		//�ٶ�ֵ--
		m_num--;
		//���� temp;
		return temp;//���ص��Ǿֲ�����
	}

private:
	int m_num;
};

//ȫ�ֺ����������������
ostream& operator<<(ostream &cout,integration p)
{
	cout << "�����������ֵΪ:" << p.m_num;
	return cout;
}


void test01()
{
	integration p;//�����޲ι��죬����һ������
	cout << p << endl;
	cout << --(--p) << endl;
}
void test02()
{
	integration p;//�����޲ι��죬����һ������
	cout << p << endl;
	cout << (p--)-- << endl;
	cout << p << endl;
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}