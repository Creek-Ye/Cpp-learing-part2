#include<iostream>
using namespace std;
class person
{
public:
	//因为用到多态的情况，其父类中的用于多态的函数通常是没有用的，通常以子类中的重写函数来实际调用，所以会写成纯虚函数；
	//语法如下
	//如果一个类中含有一个纯虚函数，那么这个类就叫抽象类；
	//抽象类是无法实例化的。
	//继承抽象类的子类必须重写多态的函数，不然也是一个抽象类，无法实例化。
	virtual void func() = 0;
};
class person2 :public person
{
public:
	virtual void func()
	{
		cout << "func函数多态的调用" << endl;
	}

};


void test01()
{
	//person caiyuanhai;//报错因为抽象类无法实例化对象
	person* p;
	p = new person2;//父类的对象指针指向子类的对象
	p->func();//利用父类来调用子类的对象中的多态函数
}
int main()
{
	test01();
	system("pause");
	return 0;
}