#include<iostream>
using namespace std;
//创建一个person 类
class person
{

  public:
	//构造函数的创建方法：
	//1.无参数法（默认构造函数）
	person()
	{
		cout << "无参构造函数的调用" << endl;
	}
	//2.有参法
	person(int a)
	{
		age = a;
		cout << "有参构造函数的调用" << endl;
	}
	//拷贝构造
	person(const person& p)
	{
		age = p.age;//把拷贝的对象p的属性age赋值给要新创建的对象；
		cout << "拷贝构造函数的调用" << endl;
	}

	//创建析构函数
	~person()
	{
		cout << "析构函数的调用" << endl;
	}

//声明类的一个属性
int age;
	
};
int main()
{
	//构造函数调用的方法：
	//1.括号法：
	//person p1;//创建一个对象p1；自动调取默认构造函数
	//person p2(10);//创建一个对象p2,同时调用有参的构造函数
	//person p3(p2);//创建一个对象p3,p3的属性age与p2的属性age一样；

	//括号法调用默认构造函数时不可以写成 person p4();这样编译器认为时一个返回值为 person类的 函数名称为p4的函数的声明
	//cout << p2.age << endl;
	//cout << p3.age << endl;

	//2.显示法
	person p1 = person();//默认构造函数的显示调用；
	person p2 = person(10);//有参构造函数的显示调用
	person p3 = person(p2);//拷贝构造函数的显示调用

	//需要注意的是等号右侧的是一个 person类，没有名字的对象，如果单独调用出来是临时的，编译器执行完本行对象的代码后，立即清除
	person(10);
	cout << "aaaaaaaaaaaa" << endl;




	system("pause");
	return 0;
		 
}