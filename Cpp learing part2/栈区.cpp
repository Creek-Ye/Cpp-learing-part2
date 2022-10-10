# include<iostream>
using namespace std;
//栈区存放局部变量和形参数据；栈区存放的数据由编译器开辟和释放
//注意：不要返回局部变量的地址，如下：
int*func(int i)
{
	int a = 10;//定义一个局部变量，该变量存放在栈区；
	return &a;//返回局部变量的地址
}
int main()
{
	int*b = func(1);//定义一个指针变量b来接受func函数返回的局部变量a的地址；
	cout << *b << endl;
	cout << *b << endl;

	system("pause");
	return 0;

}