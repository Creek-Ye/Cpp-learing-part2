#include<iostream>
using namespace std;
//定义一个值传递的函数
void swap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "swap01中a=" << a << endl;
	cout << "swap01中b=" << b << endl;

}

//定义一个地址传递的函数
void swap02(int* a, int* b)//这里相当于声明了两个int型的指针变量a和b。
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

//定义一个引用传递的函数
void swap03(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
int main()
{
	int a = 10;
	int b = 20;
	swap01(a, b);
	cout << "值传递后a=" << a << endl;
	cout << "值传递后b=" << b << endl;

	swap02(&a, &b);//地址传递形参的改变会影响实参
	cout << "地址传递后a=" << a << endl;
	cout << "地址传递后b=" << b << endl;

	swap03(a, b); //引用传递形参的改变会影响实参
	cout << "引用传递后a=" << a << endl;
	cout << "引用传递后b=" << b << endl;

	system("pause");
	return 0;
}