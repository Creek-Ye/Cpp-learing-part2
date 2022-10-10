#include<iostream>
using namespace std;
#include<string>
//函数重载的几大条件:
//1.相同的作用域，例如都在全局区
//2.函数名一样
//3.函数的形参列表中（形参的个数，形参的数据类型，形参的前后顺序）至少有一个不一样
//4.返回值类型 不可以 作为区分函数重载的条件

void function1(int a, double b, float c)
{
	cout << "this is function1's int a, double b, float c invoke" << endl;
}
void function1(int a)
{
	cout << "this is function1's int a invoke" << endl;
}

void function1(float a, int b, string u)
{
	cout << "this is function1's float a, int b, string u invoke" << endl;
}
//函数重载中的注意事项
//1.函数重载中形参为引用

void func2(int& a)//int &a 实参必须输入一个变量来与之对应
{
	cout << "this is func2 int&a invoke" << endl;
}

void func2(const int& a)//const int&a 实参必须输入一个常量与之对应本质为 int temp = 一个整形的常量， const int &a = temp;
{
	cout << "this is func2 const int& a invoke" << endl;
}

//2.函数重载中默认参数的坑
void func3(float a)
{
	cout << "this is func3 float a's invoke" << endl;
}

void func3(float a, float b=20.5)//对应的实参中 输入一个folat 类型的值也可以，两个也可以，会给编译器造成二义性，从而会报错。
{
	cout << "this is func3 float a's invoke" << endl;
}

int main()
{
	function1(10, 10.2, 10.5);

	function1(10);

	function1(10.0,30,"小孩");

	int a = 20;

	func2(a);
	func2(20);

	func3(10.4);
	//对应的第二个重载函数中形参列表中有一个默认值，输入一个值就可以调用func3的第二个重载函数，所以输入一个实参，
	//编译器会认为既可以调用func3的第一个重载函数，也可以调用第二个，从而会报错。


	system("pause");
	return 0;
}