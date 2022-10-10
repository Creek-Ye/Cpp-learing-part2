#include<iostream>
using namespace std;
//发生多态的条件：
// 1.有继承关系
// 2.在子类中重写父类函数
// 什么叫重写？
// （1）返回值类型一样
// （2）名称也一样
// （3）形参列表一样
// （4）函数体代码可以不一样
//创建一个父类
class animal
{
public:
	virtual void func()
	{
		cout << "动物的叫声" << endl;
	}
};
class chicken :public animal
{
public:
	void func()
	{
		cout << "小鸡的叫声" << endl;
	}
};
class dog :public animal
{
public:
	void func()
	{
		cout << "小狗的叫声" << endl;
	}
};
//地址早绑定，在编译阶段就已经确定了函数的地址，如下面已经确定了传入的是animal类型的，就一定调用的是animal下的成员函数；
//如果想完成地址晚绑定就必须在父类的func前面加virtual


void outvoice(animal&ani)//传入一个父类的指针或者引用来接受子类的一个对象
{
	ani.func();
}
void test01()
{
	chicken ch;
	outvoice(ch);//调用时传入子类的对象；
}
int main()
{
	test01();
	system("pause");
	return 0;
}
