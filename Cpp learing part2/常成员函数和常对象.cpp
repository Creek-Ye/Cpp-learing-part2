#include<iostream>
using namespace std;
class person
{
public:
	//成员函数
	//每一个成员函数里面都自动暗藏了一个this指针
	//this 指针的本质是一个指针常量，如果写全应该是这样： person*const this，其限定指针的指向不允许改变
	void show_person()//一般的成员函数
	{
		m_age = 200;//一般的成员函数里是可以修改成员属性的
	}

	void show_people()const//在成员函数后面加const后，相当于限定其中的this 指针变成了：const person*const this，指针指向的对象也不许修改了
	{
		//this->m_age = 150;//成员常量函数是不可以在函数内对成员属性重新赋值的
		this->a = 30;//在成员常量函数内部可以调用mutable的成员属性
	}
	//成员属性：
public:
	int m_age = 100;
	mutable int a = 20;
};
void test01()
{
	person p1;
	const person p2;//常量对象
	//常量对象只能调用常量成员函数，不能调用普通的成员函数
	p2.show_people();//常量对象调用成员常量函数
	//p2.show_person();//常量对象调用成员非常量函数会报错

}
