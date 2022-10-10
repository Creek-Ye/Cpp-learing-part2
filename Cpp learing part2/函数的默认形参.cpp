#include<iostream>
using namespace std;

int test01(int a, int b, int c)
{
	return a + b + c;
}

int test02(int a, int b = 10, int c = 10);//函数的test02的声明 ，其中b=10,c=10是函数形参的默认值，同一个函数的声明和定义只能有一个地方的形参可以有默认值

//注意为左原则，一旦中间一个变量有默认值了，后面的形参也都必须跟上默认值
int test02(int a, int b, int c)
{
	return a + b + c;//具体的实现以传入的实参值为准；
}

int main()
{
	int val = test02(10, 20, 30);
	cout << val << endl;
}

