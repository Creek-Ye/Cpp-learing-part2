#include<iostream>
using namespace std;

void printf(const int& a)//加一个const修饰是想限定实参rel的值就为20，不会因为函数体内部程序的重新赋值而影响main函数里面的实参值
{
	//a = 500;//会报错，因为const来修饰了形参，不允许再改其中的值了。
	cout << "a=" << a << endl;
}


int main()
{
	int a = 10;
	int& ref = a;//创建一个引用变量ref，使得ref和a指向一个内存空间，即ref=a;
	//int& b = 10;//非法操作，引用只能到堆区的变量上，不能直接引用的常量上

	//常量引用
	const int& b = 10;//前面加一个const就合法了，其本质是int temp =10；const int&b=temp;相当于系统临时创建了一个中间变量temp

	int rel = 20;
	printf(rel);

	system("pause");
	return 0;
}