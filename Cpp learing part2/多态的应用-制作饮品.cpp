#include<iostream>
using namespace std;

//定义一个父类
class abstract_makingdrinks
{
public:
	//类中定义纯虚成员函数
	//第一步冲水
	virtual void boil_water() = 0;
	//第二步
	//冲泡主佐料
	virtual void brew() = 0;
	//第三步
	//倒入杯中
	virtual void pour_into_cup() = 0;
	//第四步
	//加入辅料
	virtual void add_others() = 0;

	//使上述的四个步骤生效,调用打包
	void making_drinks()
	{
		boil_water();
		brew();
		pour_into_cup();
		add_others();
	}
};
//定义制作咖啡的子类
class making_coffee:public abstract_makingdrinks
{
	//重写多态函数
	//第一步冲水
	virtual void boil_water()
	{
		cout << "boiled coffee water" << endl;
	}
	//第二步
	//冲泡主佐料
	virtual void brew()
	{
		cout << "brew coffee beans with water" << endl;
	}
	//第三步
	//倒入杯中
	virtual void pour_into_cup()
	{
		cout << "pour mixed coffee water into cup" << endl;
	}

	//第四步
	//加入辅料
	virtual void add_others()
	{
		cout << "add some mild and suger" << endl;
	}
		
};

//定义制作茶的子类
class making_tea :public abstract_makingdrinks
{
	//重写多态函数
	//第一步冲水
	virtual void boil_water()
	{
		cout << "boiled tea water" << endl;
	}
	//第二步
	//冲泡主佐料
	virtual void brew()
	{
		cout << "brew teas with water" << endl;
	}
	//第三步
	//倒入杯中
	virtual void pour_into_cup()
	{
		cout << "pour mixed tea water into cup" << endl;
	}

	//第四步
	//加入辅料
	virtual void add_others()
	{
		cout << "add some lemon and suger" << endl;
	}
};

void do_workforcoffee()
{
	abstract_makingdrinks &abs = *new making_coffee;//利用父类的引用指向子类new出来的一个对象
	//调用父级的相关成员函数来实现子类的多态
	abs.making_drinks();

}

void do_workfortea()
{
	abstract_makingdrinks& abs = *new making_tea;//利用父类的引用指向子类new出来的一个对象
	//调用父级的相关成员函数来实现子类的多态
	abs.making_drinks();

}

int main()
{
	//制作coffee
	do_workforcoffee();

	cout << "***************" << "这里是分隔符" << "******************<<endl" << endl;
	//制作茶
	do_workfortea();

	system("pause");
	return 0;
}