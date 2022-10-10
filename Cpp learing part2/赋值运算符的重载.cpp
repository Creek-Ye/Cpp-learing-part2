#include<iostream>
using namespace std;
class person
{
public:
	//创建构造函数；
	person(int age)
	{
		m_age = new int(age);
	}
	//创建析构函数
	~person()
	{
		if (m_age != NULL)
		{
			delete m_age;
			m_age = NULL;
		}
	}
	//成员函数内部做赋值运算符的重载
	person& operator=(person &p)//自己构建一个赋值运算符的重载，来避免使用系统自带的赋值运算符，从而造成的new出来的地址在析构时重复删除所造成的错误；
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
	p3 = p2 = p1;//如果不在类内做特殊的赋值运算符的重载，这行会调用类内自动创建的赋值构造函数，会浅拷贝
	cout <<* p1.m_age << endl;
	cout <<* p2.m_age << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}
