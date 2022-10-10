#include<iostream>
using namespace std;

class person
{
public:
	void func1()
	{
		cout << "person 父类中func1的调用" << endl;;
	}
	void func1(int a)
	{
		cout << "person 父类中func1(int a)的调用" << endl;
	}
public:
	int m_a=10;	
};


class children :public person//创建一个children子类，以public的方式继承person父类
{
public:
	void func1()
	{
		cout << "children 子类中func1的调用" << endl;
	}
	int m_a=20;
};

void test01()
{
	children ch;
	cout << ch.m_a << endl;//如果父级和子集的成员名称一样直接调用会子类；
	cout << ch.person::m_a << endl;//如果想调用父级类中同名的变量，需要加作用域
	ch.func1();//也是调用的子类中的
	//ch.func1(10)//同一个名func1即使用有参函数重载的方式区分也是不可以的，因为在子类中但凡函数名一样都会覆盖掉父类中所有的同名称的函数
	ch.person::func1();
	ch.person::func1(10);

}
int main()
{
	test01();
	system("pause");
	return 0;
}