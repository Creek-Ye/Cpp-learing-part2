#include<iostream>
using namespace std;
int& func1()
{
	int a = 10;
	return a;//不要返回局部变量的引用
}

int& func2()
{
	static int a = 10;//定义一个静态变量存放在全局区中
	return a;
}
int main()
{
	//int &b = func1();
	/*cout << b << endl;
	cout << b << endl;*/

	int& b = func2();
	func2() = 1000;//若函数的返回值类型为引用，可以放在左值
	cout << b << endl;
	cout << b << endl;

	system("pause");
	return 0;
}