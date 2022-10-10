#include<iostream>
using namespace std;
class parent
{
public:
	//创建静态成员属性，类内声明，类外赋初值
	static int m_a;
	//创建静态的成员函数
	static void func()
	{
		cout << "父类中func()的调用" << endl;
	}
};
int parent:: m_a = 10;

class child:public parent
{
public:
	//子类中也有一个一模一样的静态属性
	static int m_a;
	//子类中也创建一个一模一样的成员静态函数
	static void func()
	{
		cout << "子类中func()的调用" << endl;
	}
};
int child::m_a = 20;

void test01()
{
	//通过创建对象的方式分别访问子类和父类中同名的静态属性
	child p;
	cout << "子类中的m_a=" << p.m_a<<endl;
	cout<< "父类中的m_a=" << p.parent::m_a<<endl;//加作用域
	//通过添加类的作用域来访问：
	cout << "子类中的m_a=" << child::m_a<<endl;
	cout << "父类中的m_a=" << child::parent::m_a<<endl;//第一个::表示通过类名访问，第二个::表示在父类的作用域下
	//通过创建对象的方式分别访问子类和父类中同名的静态函数
	p.func();
	p.parent::func();
	//通过添加类的作用域来访问：
	child::func();
	child::parent::func();//第一个::表示通过类名访问，第二个::表示在父类的作用域下
}
int main()
{
	test01();
	system("pause");
	return 0;
}