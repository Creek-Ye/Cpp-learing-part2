#include<iostream>
using namespace std;
int main() 
{
	//定义一个变量a
	int a = 10;
	//利用"引用"给变量a起一个别名变量b,其本质指向同一个内存空间。
	//语法
	//数据类型必须与要引用的一致+&+别名名称
	//注意引用声明的时候 必须要初始化，例如int &b=a
	//但注意一旦定义b来引用a了就不能重新定义引用int &b=c了。
	int& b = a;
	cout << "a为:" << a << endl;
	cout << "b为:" << b << endl;

	b = 20;
	cout << "a为:" << a << endl;
	cout << "b为:" << b << endl;



	system("pause");
	return 0;
}