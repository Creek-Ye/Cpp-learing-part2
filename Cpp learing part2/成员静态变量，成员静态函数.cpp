#include<iostream>
using namespace std;
//静态成员变量
//1.所有类的对象公用一个静态成员变量
//2.在程序运行前分配内存空间，存放在全局区
//3.静态成员变量需要类内声明，类外赋初始值

//静态成员函数
//1.所有类的对象公用一个静态成员函数
//2.静态成员函数只能调用静态变量，不能调用非静态变量

class person
{
public:
	static int m_age;//静态成员变量；类内声明
	int m_value = 230;
	static void fuc1()//静态成员函数
	{
		m_age = 500;
		//m_value = 200;//非静态成员变量不可访问到。
	}
};
 int person::m_age = 100;//person 作用域下的赋初始值

 void test01()
 {
	 person p1;//创建一个person对象p1
	 cout << p1.m_age << endl;//通过对象访问静态变量
	 person p2;
	 p2.m_age = 200;
	 cout << p2.m_age << endl;//p1和p2公用一个静态变量。
	 cout << person::m_age << endl;//访问静态变量的途径2

 }
 int main()
 {
	 test01();
	 system("pause");
	 return 0;
 }