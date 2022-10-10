#include<iostream>
using namespace std;
//创建一个父类
class parent1
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};
//创建一个子类：
class children1:public parent1//创建一个子类，以public的方式继承父类parent
{
	//创建一个成员函数
	void func01()
	{
		m_a = 10;//继承下来还是public权限
		m_b = 20;//继承下来还是protected权限
		//m_c = 30;父类private权限的子类访问不到
	}
};

class parent2
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};
//创建一个子类：
class children2 :protected parent2//创建一个子类，以protected的方式继承父类parent
{
	//创建一个成员函数
	void func01()
	{
		m_a = 10;//继承下来变成protected权限
		m_b = 20;//继承下来还是protected权限
		//m_c = 30;父类private权限的子类访问不到
	}
};

class parent3
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};
//创建一个子类：
class children3 :protected parent3//创建一个子类，以protected的方式继承父类parent
{
	//创建一个成员函数
	void func01()
	{
		m_a = 10;//继承下来变成private权限
		m_b = 20;//继承下来还是private权限
		//m_c = 30;父类private权限的子类访问不到
	}
};
void test01()
{
	children3 ch3;
	//ch2.m_a = 20;//protected权限类外不可以访问到
	//ch1.m_b = 20;//子类继承下来的权限为保护权限访问不到
}
