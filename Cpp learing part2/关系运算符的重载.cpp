#include<iostream>
using namespace std;
class cars
{
	friend void test02();
public:
	//���캯��
	cars(string brand, int score)
	{
		//����ֵ����
		m_brand = brand;
		m_score = score;
	}
	//����������Ա������������==�����
	bool operator==(cars &c)
	{
		if (this->m_brand == c.m_brand && this->m_score == c.m_score)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	//��������Ա����������>�����
	bool operator>(cars& c)
	{
		if (this->m_score > c.m_score)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
private:
	string m_brand;
	int m_score;
};

void test01()
{
	cars c1 = cars("volvo", 99);
	cars c2 = cars("BWM", 90);
	if (c1 == c2)
	{
		cout << "c1��c2��һ�" << endl;
	}
	else
	{
		cout << "c1��c2����һ�" << endl;
	}
}
void test02()
{
	cars c1 = cars("volvo", 99);
	cars c2 = cars("BWM", 90);
	if (c1 > c2)
	{
		cout << c1.m_brand << "�����۱�" << c2.m_brand << "��" << endl;
	}
	else
	{
		cout << c1.m_brand << "�����۱�" << c2.m_brand << "��" << endl;
	}
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}