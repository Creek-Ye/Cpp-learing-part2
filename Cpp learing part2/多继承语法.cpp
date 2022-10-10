#include<iostream>
using namespace std;
class personA
{
public:
	personA()
	{
		m_a = 10;
	}

	int m_a;
};
class personB
{
public:
	personB()
	{
		m_b = 20;
	}

	int m_b;
};
class child :public personA, public personB//创建一个子类，以public的方式分别继承personA和personB
{
public:
	int m_c;
	int m_d;
};
void test01()
{
	cout << sizeof(child) << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}