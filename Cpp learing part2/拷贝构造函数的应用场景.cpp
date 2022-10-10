#include<iostream>
using namespace std;
//创建一个person 类
class person
{
public:
	//创建构造函数
	// 1.默认构造函数
	person()
	{
		cout << "默认构造函数的调用" << endl;
	}
	//2.有参构造函数
	person(int a)
	{
		m_age = a;
		cout << "有参构造函数的调用" << endl;
	}
	//3.拷贝构造函数
	person(const person& p)
	{
		m_age = p.m_age;
		cout << "拷贝构造函数的调用" << endl;
	}
	//析构函数
	~person()
	{
		cout << "析构函数的调用" << endl;
	}
	//属性
	int m_age;

};
//调用拷贝构造函数
//情形1；
void test01()
{
	person p1(10);//创建一个p1对象 并且p1调用有参构造函数
	person p2(p1);//创建一个对象p2，并且把p1的属性都初始化拷贝给p2
	cout << "aaaaaaaaaaaaaaa" << endl;
}

//情形2；
//对象作为形参给函数 值传递

void func01(person p)
{
	cout << "invoke of func" << endl;
}
void test02()//对象作为形参 值传递
{
	person p1;//先创建一个对象p1
	func01(p1);
}

//情形3；
//函数返回局部对象,也是值传递
person func02()
{
	person p1(10);
	cout << "p1's address is: " << (int)&p1 << endl;
	return p1;
}
void test03()
{
	person p=func02();
	cout << "p's address is: " << (int)&p << endl;
}


int main()
{
	//test01();

	//test02();

	test03();
	system("pause");
	return 0;
}