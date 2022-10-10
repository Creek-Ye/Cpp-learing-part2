#include<iostream>
using namespace std;
//构造一个person类
class person
{
public://公共访问权限

	//1.构造函数的创建 位置：在类中，格式：类名+(){}
	//2.可以传入形参，也可不传入形参
	//3.没有返回值，也不写void
	//4.对象在被创建时会被系统自动调用一次，而且只会被调用一次
	person()
	{
		cout << "invoke construction function" << endl;
	}
	//1,析构函数的创建 位置：在类中，格式：~类名+(){}
	//2.不可以传入形参
	//3.没有返回值，也不写void
	//4.对象在被堆区清除时，析构被系统自动调用，而且只会被调用一次
	~person()
	{
		cout << "析构函数的调用" << endl;
	}
};
int main()
{
	person p;//对象在被创建时构造函数会被自动调用，用于对象的初始化。
	system("pause");
	return 0;
	//函数体结束后会自动调用析构函数，用于对象变量的清除。
}
