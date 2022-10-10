#include<iostream>
using namespace std;
//定义全局变量（不在main函数中的变量)
int g_a = 10;
int g_b = 20;
//const修饰的全局变量
const int c_g_a = 10;
const int c_g_b = 20;
int main()
{
	//定义局部变量（在main函数里面的变量）
	int l_a = 10;
	int l_b = 20;
	cout << "局部变量l_a的地址为 " << int(&(l_a)) << endl;
	cout << "局部变量l_b的地址为 " << int(&(l_b)) << endl;
	cout << "全局变量g_a的地址为 " << int(&(g_a)) << endl;
	cout << "全局变量g_b的地址为 " << int(&(g_b)) << endl;
	//定义静态变量 变量前加关键字static
	static int s_a = 10;
	cout << "静态变量的地址为 " << int(&(s_a))  << endl;
	//定义常量
	//分为字符串常量
	cout << "字符串常量的地址为 " << int(&("hello,world")) << endl;
	
	cout << "const修饰的全局变量a的地址为 " << int(&(c_g_a)) << endl;
	cout << "const修饰的全局变量b的地址为 " << int(&(c_g_b)) << endl;
	//定义const修饰的局部变量（在main函数里就是局部）
	const int c_l_a = 10;
	const int c_l_b = 20;
	cout << "const修饰的局部变量a的地址为 " << int(&(c_l_a)) << endl;
	cout << "const修饰的局部变量b的地址为 " << int(&(c_l_b)) << endl;

	system("pause");
	return 0;
}