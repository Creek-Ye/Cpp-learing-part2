#include<iostream>
using namespace std;
void func1(int a, int)//函数的形参的占位：只是输入数据类型，不加数据名称；
{
	cout << "this is func1's invoke" << endl;
}

void func2(int a, int=10)//占位符也可以加默认参数
{
	cout << "this is func2's invoke" << endl;
}
int main()
{
	func1(10, 3);//必须传入相应的整形数据3来对应func1中的占位符int；

	func2(20);//func2函数的调用由于占位符有默认参数，所以调用时不用传入常量也可以调用。

	system("pause");
	return 0;
}