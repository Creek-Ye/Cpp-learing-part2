#include<iostream>
using namespace std;
class cars
{
	friend void test02();
public:
	//构造函数
	cars(string brand, int score)
	{
		//赋初值操作
		m_brand = brand;
		m_score = score;
	}
	//在类内做成员函数用来重载==运算符
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
	//类内做成员函数来重载>运算符
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
		cout << "c1和c2是一款车" << endl;
	}
	else
	{
		cout << "c1和c2不是一款车" << endl;
	}
}
void test02()
{
	cars c1 = cars("volvo", 99);
	cars c2 = cars("BWM", 90);
	if (c1 > c2)
	{
		cout << c1.m_brand << "的评价比" << c2.m_brand << "好" << endl;
	}
	else
	{
		cout << c1.m_brand << "的评价比" << c2.m_brand << "差" << endl;
	}
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}